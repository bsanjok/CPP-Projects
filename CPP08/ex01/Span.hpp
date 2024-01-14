/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:04:56 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/17 15:41:46 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span{

private:
    std::vector<int> *_integers;
    unsigned int _max;
    
public:
    Span();
    ~Span();
    Span(const Span &obj);
    Span& operator=(const Span &rhs);
    Span(unsigned int max);

    std::vector<int> *getVector() const;
    
    void addNumber(int new_number);
    void addNumberImproved(std::vector<int>::const_iterator range_start, std::vector<int>::const_iterator range_end);
    int shortestSpan();
    int longestSpan();
    class numberOverflowException : public std::exception{
        public:
            const char *what() const throw();
    };
    class noNumberException : public std::exception{
        public:
            const char *what() const throw();
    };
    class oneNumberException : public std::exception{
        public:
            const char *what() const throw();
    };
};