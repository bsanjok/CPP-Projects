/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:36:24 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/11 13:18:14 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade)
{
    *this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
    this->_grade = rhs._grade;
    return (*this);
}

std::ostream& operator<<(std::ostream& ost, const Bureaucrat& obj)
{
    ost << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (ost); 
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooLowException();
    else if (grade > 150)
        throw GradeTooHighException();
    _grade = grade;
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

const std::string Bureaucrat::getName() const
{
    return (_name);
}

void Bureaucrat::incrementGrade()
{
    int tempgrade;

    tempgrade = _grade;
    tempgrade--;
    if (tempgrade < 1)
        throw GradeTooHighException();
    else if (tempgrade > 150)
        throw GradeTooLowException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    int tempgrade;

    tempgrade = _grade;
    tempgrade++;
    if (tempgrade < 1)
        throw GradeTooHighException();
    else if (tempgrade > 150)
        throw GradeTooLowException();
    _grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade too low!");
}

void Bureaucrat::signForm(AForm &obj) const
{
    Bureaucrat h = *this;
    try
    {
        obj.beSigned(h);
        std::cout << this->getName() << " signed " << obj.getName() << std::endl; 
    }
    catch (const std::exception &e)
    {
        std::cout << this->getName() << " couldn't sign " << obj.getName() << " because " << e.what() << std::endl; 
    }
}

void Bureaucrat::executeForm(AForm const &form)
{
    // try
    // {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    
}