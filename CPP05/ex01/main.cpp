/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:49:30 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/10 18:00:00 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
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
    try 
    {
        std::cout << std::endl << "HAPPY FORM CASE" << std::endl;
        Bureaucrat d("Bhatta", 149);
        std::cout << d << std::endl;
        Form myform("myform", 0, 150, 4);
        Form newform(myform);
        
        std::cout << myform << std::endl;
        d.signForm(myform);
        std::cout << "myform: " << myform << std::endl;
        std::cout << "newform: " << newform << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        std::cout << std::endl << "UNHAPPY FORM CASE" << std::endl;
        Bureaucrat e("Bhatta", 3);
        std::cout << e << std::endl;
        Form myform2("myform", 0, 2, 4);
        e.signForm(myform2);
        std::cout << "myform: " << myform2 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}