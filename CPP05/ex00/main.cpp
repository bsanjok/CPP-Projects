/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:49:30 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/10 17:49:16 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try 
    {
        Bureaucrat a("Sanjok", 140);
        std::cout << a << std::endl;
        std::cout << std::endl << "DECREMENTING" << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        std::cout << std::endl << "INCREMENTING" << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat b("Sanjok2", -1);
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat c("Sanjok3", 151);
        std::cout << c << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}