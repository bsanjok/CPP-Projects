/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:49:30 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/11 14:52:38 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try 
    {
       Bureaucrat a("Sanjok", 137);
       ShrubberyCreationForm sform("hom2e");
       std::cout << sform << std::endl;
       a.signForm(sform);
       a.executeForm(sform);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try 
    {
       Bureaucrat b("Sanjok1", 45);
       RobotomyRequestForm rform("mybrain");
       std::cout << rform << std::endl;
       b.signForm(rform);
       b.executeForm(rform);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try 
    {
       Bureaucrat c("Sanjok2", 5);
       PresidentialPardonForm pform("innocentBwai");
       std::cout << pform << std::endl;
       c.signForm(pform);
       c.executeForm(pform);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}