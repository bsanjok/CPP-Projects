/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:42:08 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/24 18:32:31 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
    *this = obj;
}
PmergeMe& PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {
        _paired_set = rhs._paired_set;
        _main_chain_set = rhs._main_chain_set;
        _pend_chain_set = rhs._pend_chain_set;
        _storage = rhs._storage;
        _struggler = rhs._struggler;
        _paired_vec = rhs._paired_vec;
        _main_chain_vec = rhs._main_chain_vec;
        _pend_chain_vec = rhs._pend_chain_vec;
        _has_struggler = rhs._has_struggler;
    }
    return (*this);
}

void PmergeMe::createChainsSet()
{
    for (std::set<std::vector<int> >::iterator it = _paired_set.begin(); it != _paired_set.end(); it++)
    {
        _main_chain_set.insert(*(it->begin()));
        _pend_chain_set.insert(*(it->end() - 1));
    }
}

void PmergeMe::createChainsVec()
{
    for (std::vector<std::vector<int> >::iterator it = _paired_vec.begin(); it != _paired_vec.end(); it++)
    {
        _main_chain_vec.push_back(*(it->begin()));
        _pend_chain_vec.push_back(*(it->end() - 1));
    }
}

void PmergeMe::mergeInsertChainsSet()
{
    for (std::set<int>::iterator ip = _pend_chain_set.begin(); ip != _pend_chain_set.end(); ip++)
    {
        _main_chain_set.insert(*ip);
    }
    if (_has_struggler)
    {
        _main_chain_set.insert(_struggler);
    }
}

void PmergeMe::mergeInsertChainsVec()
{
    
    _main_chain_vec.insert(_main_chain_vec.begin(), *(_pend_chain_vec.begin()));
    _pend_chain_vec.erase(_pend_chain_vec.begin());
    for (std::vector<int>::iterator ip = _pend_chain_vec.begin(); ip != _pend_chain_vec.end(); ip++)
    {
        _main_chain_vec.insert(_main_chain_vec.begin() + getInsertionPlace(*ip), *ip);
    }
    if (_has_struggler)
        _main_chain_vec.insert(_main_chain_vec.begin() + getInsertionPlace(_struggler), _struggler);
}

void PmergeMe::loadStorageToSet()
{
    int first;
    int second;
    std::vector<int> values;
    size_t n;

    if (_storage.size() % 2 == 0)
    {
        n = _storage.size();
        _has_struggler = false;
    }
    else
    {
        n = _storage.size() - 1;
        _struggler = _storage[n];
        _has_struggler = true;
    }
    for(size_t i = 0; i < n; i++)
    {
        first = _storage[i + 1];
        second = _storage[i];
        values.push_back(first);
        values.push_back(second);
        _paired_set.insert(values);
        values.clear();
        i = i + 1;
        if (i == n - 2)
        {
            first = _storage[i + 1];
            second = _storage[i];
            values.push_back(first);
            values.push_back(second);
            _paired_set.insert(values);
            values.clear();
        }
    }
}

void PmergeMe::loadStorageToVec()
{
    int first;
    int second;
    std::vector<int> values;
    size_t n;

    if (_storage.size() % 2 == 0)
    {
        n = _storage.size();
        _has_struggler = false;
    }
    else
    {
        n = _storage.size() - 1;
        _struggler = _storage[n];
        _has_struggler = true;
    }
    for(size_t i = 0; i < n; i++)
    {
        if (_storage[i + 1] > _storage[i])
        {
            first = _storage[i + 1];
            second = _storage[i];
        }
        else
        {
            second = _storage[i + 1];
            first = _storage[i];
        }
        values.push_back(first);
        values.push_back(second);
        _paired_vec.push_back(values);
        values.clear();
        i = i + 1;
        if (i == n - 2)
        {
            first = _storage[i + 1];
            second = _storage[i];
            values.push_back(first);
            values.push_back(second);
            _paired_vec.push_back(values);
            values.clear();
        }
    }
}

void PmergeMe::loadElementsToStorage(std::string str)
{
    if (isTypeInt(str))
    {
        _storage.push_back(convertToInt(str));
    }
    else
        throw inValidInputException();
}

bool PmergeMe::isTypeInt(std::string param)
{
    if (param[0] == '-')
        throw inValidInputException();
    else if (param[0] == '+')
        param.erase(param.begin());
    for(unsigned long i = 0; i < param.length(); i++)
    {
        if(!isdigit(param[i]))
            return false;
    }
    return (true);
}

int PmergeMe::convertToInt(std::string param)
{
    int result;
    std::stringstream ss(param);

    ss >> result;
    if (ss.fail())
       throw inValidInputException();
    return(static_cast<int>(result));
}

int PmergeMe::getInsertionPlace(int value_to_check)
{
    int low = 0;
    int high = _main_chain_vec.size() - 1;
    
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (_main_chain_vec[mid] == value_to_check)
            return mid;
        else if (_main_chain_vec[mid] < value_to_check)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return (low);
}

const char *PmergeMe::inValidInputException::what() const throw()
{
    return("Invalid number present in the input!");
}

const char *PmergeMe::containsDuplicateException::what() const throw()
{
    return("Duplicate numbers in input!");
}

const char *PmergeMe::onlyOneElementException::what() const throw()
{
    return("Input has only one element! Nothing to sort!");
}

void PmergeMe::sortWithSet()
{
    loadStorageToSet();
    createChainsSet();
    mergeInsertChainsSet();
}

void PmergeMe::sortWithVec()
{
    loadStorageToVec();
    createChainsVec();
    mergeInsertChainsVec();
}

bool PmergeMe::checkDuplicate()
{
    if (_storage.size() == 1)
        throw onlyOneElementException();
    for (std::vector<int>::iterator it = _storage.begin(); it != _storage.end(); it++)
    {
        for (std::vector<int>::iterator itin = it + 1; itin != _storage.end(); itin++)
        {
            if (*it == *itin)
                throw containsDuplicateException();
        }
    }
    return (false);
}

void PmergeMe::printContainerVec(std::vector<int> container)
{
    for (std::vector<int>::iterator it = container.begin(); it != container.end(); it++)
    {
        std::cout << *it << " ";
    }
}

void PmergeMe::printContainerSet(std::set<int> container)
{
    for (std::set<int>::iterator it = container.begin(); it != container.end(); it++)
    {
        std::cout << *it << " ";
    }
}

void PmergeMe::printInfo()
{
    std::cout << "Before: " ;
    printContainerVec(_storage);
    std::cout << std::endl;
    clock_t start = clock();
    sortWithSet();
    clock_t end = clock();
    std::cout << "After: " ;
    printContainerSet(_main_chain_set);
    std::cout << std::endl;

    std::cout << "Time to process a range of " << _storage.size() <<" elements with std::set: " << std::fixed << (float)(end - start)/CLOCKS_PER_SEC << "µs" << std::endl;
    clock_t start_v = clock();
    sortWithVec();
    clock_t end_v = clock();
    std::cout << "Time to process a range of " << _storage.size() <<" elements with std::vector: " << std::fixed << (float)(end_v - start_v)/CLOCKS_PER_SEC << "µs" << std::endl;
}