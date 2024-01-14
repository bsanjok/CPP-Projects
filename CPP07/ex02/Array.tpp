/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:59:18 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/15 13:26:57 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _n(0)
{
    _dataarr = new T[_n];
}

template<typename T>
Array<T>::~Array(){
    delete [] _dataarr;
}

template<typename T>
Array<T>::Array(const Array &obj): _n(obj._n)
{
    _dataarr = new T[_n];
    for  (unsigned int i = 0; i < _n; i++)
    {
        _dataarr[i] = obj._dataarr[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &rhs)
{
    if (this != &rhs)
    {
        delete []_dataarr;
        _dataarr = new T[rhs._n];
        for  (unsigned int i = 0; i < rhs._n; i++)
        {
            _dataarr[i] = rhs._dataarr[i];
        }
        _n = rhs._n;
    }
    return (*this);
}

template<typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
    _dataarr = new T[_n]();
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _n)
        throw outOfBoundException();
    return (_dataarr[index]);
}

template<typename T>
const char *Array<T>::outOfBoundException::what() const throw()
{
    return("Exception: Trying to access out of bound element!");
}