/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:32:35 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/11 14:28:50 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{
    this->setTarget(obj.getTarget());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
    }
    return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned())
    {
        if (executor.getGrade() <= 45)
        {
            formTask(this->getTarget());
        }
        else if (executor.getGrade() > 45)
            throw GradeTooLowException();
    }
    else
        throw NotSignedException();
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 0, 72, 45)
{
    this->setTarget(target);
}

void RobotomyRequestForm::formTask(std::string target) const
{
    std::srand(static_cast<unsigned int>(time(0)));

    int randomnumber = std::rand() % 2;

    std::cout << "**GRRRR!! TRNGGG!! PRRRRRR!**" << std::endl;
    if (randomnumber == 0)
    {
        std::cout << target << " has been robotomized" << std::endl;
    }
    else
    {
        std::cout << " OINK! robotomy failed!" << std::endl;
    }
}