/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nosed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:57:40 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/08 11:03:38 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nosed.hpp"

Nosed::Nosed(){}
Nosed::~Nosed(){}

Nosed::Nosed( std::string s1, std::string s2, std::string fname ) : _s1(s1), _s2(s2), _fname(fname)
{
    
}

std::string Nosed::getS1() const
{
    return _s1;
}

std::string Nosed::getS2() const
{
    return _s2;
}

std::string Nosed::getFname() const
{
    return _fname;
}

std::string Nosed::getFout() const
{
    return (_fname + ".replace");
}

std::string *Nosed::getBuffer()
{
    return (&_buffer);
}

void Nosed::setBuffer( std::string buff)
{
    _buffer = buff;
}

int Nosed::findS1(int pos)
{   
    _found = _buffer.find(_s1, pos);
    if (_found > _buffer.length())
        return (0);
    return (1);
}

int Nosed::myReplace()
{
    int         look;

    look = Nosed::findS1(0);
    if (!look)
    {
        std::cout << "Oh no! I couldn't find '" << _s1 << "' anywhere in file!" << std::endl;
        return (0);
    }
    while (look)
    {
        _buffer.erase(_found, _s1.length());
        _buffer.insert(_found, _s2);
        look = Nosed::findS1(_found + _s2.length());
    }
    return (1);
}
