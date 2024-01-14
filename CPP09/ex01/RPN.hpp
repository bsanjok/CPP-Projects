/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 11:44:58 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/23 13:39:49 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <exception>

class RPN {

private:
    std::stack<int> _rpn_stack;
    
public:
    RPN();
    ~RPN();
    RPN(const RPN &obj);
    RPN& operator=(const RPN &rhs);

    bool containsStr(std::string const &expression, std::string const &pool);
    bool containsChar(const char ch, std::string const &pool);
    int calculator(std::string &expression);
    int operation(char &oper, int first, int second);
    class isInvalidArgsException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class invalidNumberOfOperatorsException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class invalidNumberOfOperandsException : public std::exception
    {
        public:
            const char *what() const throw();
    };
};