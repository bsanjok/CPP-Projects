/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:05:05 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/17 16:24:44 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(0)
{
    _integers = new std::vector<int>();
}

Span::~Span()
{
    delete _integers;
}

Span::Span(unsigned int max) : _max(max)
{
    _integers = new std::vector<int>(max);
    _integers->erase(_integers->begin(), _integers->end());
}

Span::Span(const Span &obj)
{
    _integers = new std::vector<int>(obj._max);
    for (std::vector<int>::const_iterator it = obj._integers->begin(); it != obj._integers->end(); ++it)
    {
        _integers->push_back(*it);
    }
}

Span& Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        delete _integers;
        _integers = new std::vector<int>(rhs._max);
        for (std::vector<int>::const_iterator it = rhs._integers->begin(); it != rhs._integers->end(); ++it)
        {
            _integers->push_back(*it);
        }
    }
    return (*this);
}

std::vector<int> *Span::getVector() const
{
    return (_integers);
}

const char *Span::numberOverflowException::what() const throw()
{
    return ("Integer Vector at full capacity! Cannot add any new elements!");
}

const char *Span::noNumberException::what() const throw()
{
    return ("There is no number, hence span cannot be found!");
}

const char *Span::oneNumberException::what() const throw()
{
    return ("There is only one number, hence span cannot be found!");
}

void Span::addNumber(int new_number)
{
    if (_integers->size() < _max)
        _integers->push_back(new_number);
    else
        throw numberOverflowException();
}

int Span::longestSpan()
{
    int longest;

    longest = 0;
    if (_integers->size() == 1)
        throw oneNumberException();
    else if (_integers->size() == 0)
        throw noNumberException();
    std::sort(_integers->begin(), _integers->end(), std::greater<int>());
    for (size_t i = 0; i < _integers->size(); i++)
    {
        for (size_t j = i + 1; j < _integers->size(); j++)
        {
            if (_integers->at(i) - _integers->at(j) >= 0 && _integers->at(i) - _integers->at(j) >= longest)
                longest = _integers->at(i) - _integers->at(j);
        }
    }
    return (longest);
}

int Span::shortestSpan()
{
    int shortest;

    shortest = longestSpan();
    for (size_t i = 0; i < _integers->size(); i++)
    {
        for (size_t j = i + 1; j < _integers->size(); j++)
        {
            if (_integers->at(i) - _integers->at(j) >= 0 && _integers->at(i) - _integers->at(j) <= shortest)
                shortest = _integers->at(i) - _integers->at(j);
        }
    }
    return (shortest);
}

void Span::addNumberImproved(std::vector<int>::const_iterator range_start, std::vector<int>::const_iterator range_end)
{
    size_t totalelements = std::distance(range_start, range_end);
    if (totalelements + _integers->size() <= _max)
    {
        _integers->insert(_integers->end(), range_start, range_end);
    }
    else
        throw numberOverflowException();
}