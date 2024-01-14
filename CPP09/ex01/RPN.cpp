/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 11:58:03 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/23 14:13:24 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN &obj)
{
    *this = obj;
}
RPN& RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
    {
        _rpn_stack = rhs._rpn_stack;
    }
    return (*this);
}

bool RPN::containsStr(std::string const &expression, std::string const &pool)
{
    for (unsigned int i = 0; i < expression.size(); i++)
    {
        if (pool.find(expression[i]) == pool.npos)
            return (false);
    }
    return (true);
}

bool RPN::containsChar(const char ch, std::string const &pool)
{
    if (pool.find(ch) == pool.npos)
        return (false);
    return (true);
}

int RPN::operation(char &oper, int first, int second)
{
    if (oper == '*')
        return (first * second);
    else if (oper == '/')
        return (first / second);
    else if (oper == '-')
        return (first - second);
    else if (oper == '+')
        return (first + second);
    return (0);
}

int RPN::calculator(std::string &expression)
{
    int first;
    int second;

    if (!containsStr(expression, " /*-+0123456789"))
        throw isInvalidArgsException();
    for (std::string::iterator it = expression.begin(); it != expression.end(); it++)
    {
        if (*it != ' ' && !containsChar(*it, "+-*/"))
            _rpn_stack.push(*it - '0');
        else if (containsChar(*it, "+-*/"))
        {
            if (_rpn_stack.size() >= 2)
            {
                second = _rpn_stack.top();
                _rpn_stack.pop();
                first = _rpn_stack.top();
                _rpn_stack.pop();
                _rpn_stack.push(operation(*it, first, second));
            }
            else
                throw invalidNumberOfOperatorsException();
        }
    }
    if (_rpn_stack.size() > 1)
        throw invalidNumberOfOperandsException();
    return (_rpn_stack.top());
}

const char *RPN::isInvalidArgsException::what() const throw()
{
    return ("Expression containes invalid characters or operations! RPN Supports only ' +-/*0123456789'");
}

const char *RPN::invalidNumberOfOperatorsException::what() const throw()
{
    return ("Invalid number of operators! Not enough elements in stack for operation!");
}

const char *RPN::invalidNumberOfOperandsException::what() const throw()
{
    return ("Invalid number of operands! Element still left in stack for operation!");
}
