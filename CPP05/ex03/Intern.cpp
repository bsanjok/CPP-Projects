/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:59:11 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/11 16:07:55 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::~Intern(){}

Intern::Intern(){}

Intern::Intern(const Intern &obj)
{
    *this = obj;
}

Intern& Intern::operator=(const Intern &rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

AForm *Intern::makeForm(std::string formname, std::string target)
{
    int option;
    
    option = -1;
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon" };
    for(int i = 0; i < 3; i++)
    {
        if (formname == forms[i])
        {
            option = i;
            std::cout << "Intern creates " << formname << std::endl;
            break;
        }
    }
    switch (option)
    {
    case 0:
        return(new ShrubberyCreationForm(target));
        break;
    case 1:
        return(new RobotomyRequestForm(target));
    case 2:
        return(new PresidentialPardonForm(target));
    default:
        std::cout << ":( The provided formname '" << formname << "' doesn't exist ):" << std::endl;
    }
    return (0);
}