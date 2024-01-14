/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:56:36 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/15 13:19:47 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<exception>

template<typename T>
class Array{

private:
    T *_dataarr;
    unsigned int _n;
    
public:
    Array();
    ~Array();
    Array(const Array &obj);
    Array& operator=(const Array &rhs);
    
    Array(unsigned int n);
    class outOfBoundException : public std::exception{
        public:
            const char *what() const throw();
    };

    T& operator[](unsigned int index);
};