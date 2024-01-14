/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:33:43 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/17 19:28:47 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main(void)
{
    std::srand(std::time(0));
    size_t element_nos;
    element_nos = 5;
    
    Span obj(5);
    Span obj_copy_constructor(obj);
    Span obj_assignment_operator;
    obj_assignment_operator = obj;
    
    try{
        
        obj.addNumber(6);
        obj.addNumber(3);
        obj.addNumber(17);
        obj.addNumber(9);
        obj.addNumber(11);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    for(int i = 0; i < 5; i++)
    {
        std::cout << "integers[" << i << "]->obj: " <<  (*obj.getVector())[i] << ", obj_copy: " << (*obj_copy_constructor.getVector())[i] << ", obj_assignment: " << (*obj_assignment_operator.getVector())[i] << std::endl;
    }
    std::cout << "shortest: " << obj.shortestSpan() << std::endl;
    std::cout << "longest: " << obj.longestSpan() << std::endl;
    std::cout << std::endl << "<OVERFLOW TEST: ADD NUMBER>" << std::endl;
    try{
        obj.addNumber(12);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "<WORKING TEST: BULK ADD NUMBER>" << std::endl;
    Span obj1(element_nos);
    try
    {
        for (size_t i = 0; i < element_nos; i++)
        {
            obj1.addNumber(std::rand());
        }
        std::cout << "obj1 shortest: " << obj1.shortestSpan() << std::endl;
        std::cout << "obj1 longest: " << obj1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "<OVERFLOW TEST: IMPROVED ADD NUMBER>" << std::endl;
    Span obj3(element_nos - 1);
    try
    {
        obj3.addNumberImproved(obj1.getVector()->begin(), obj1.getVector()->end());
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl << "<WORKING TEST: IMPROVED ADD NUMBER>" << std::endl;
    Span obj4(element_nos);
    try
    {
        std::cout << std::endl << "...COPYING OBJ1 to OBJ2 USING IMPROVED ADD NUMBER FUNC" << std::endl;
        obj4.addNumberImproved(obj1.getVector()->begin(), obj1.getVector()->end());
        std::cout << "obj4 shortest: " << obj1.shortestSpan() << std::endl;
        std::cout << "obj4 longest: " << obj1.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}