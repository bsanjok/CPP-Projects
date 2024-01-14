/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:10:04 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/11 14:49:11 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
    this->setTarget(obj.getTarget());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
    }
    return(*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned())
    {
        if (executor.getGrade() <= 137)
        {
            formTask(this->getTarget());
        }
        else if (executor.getGrade() > 137)
            throw GradeTooLowException();
    }
    else
        throw NotSignedException();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShurbberyForm", 0, 145, 137)
{
    this->setTarget(target);
}

void ShrubberyCreationForm::formTask(std::string target) const
{
    std::ofstream fout;

    fout.open((target + "_shrubbery").c_str());
    if (!fout)
    {
        std::cout << "Sorry! couldn't open the file" << std::endl;
    } 
    fout << "      _-_    " << std::endl;
    fout << "   /~~   ~~\\    " << std::endl;
    fout << "  /~~     ~~\\    " << std::endl;
    fout << " {           }    " << std::endl;
    fout << "  \\  _- -_  /    " << std::endl;
    fout << "   ~ \\ //  ~    " << std::endl;
    fout << "_- -  | | _- _    " << std::endl;
    fout << " _ -  | |   -_    " << std::endl;
    fout << "     // \\    " << std::endl;
    fout.close();
}