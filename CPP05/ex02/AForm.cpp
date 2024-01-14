/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:41:15 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/11 13:32:03 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("no_name"), _gradetosign(0), _gradetoexecute(0) {}

AForm::~AForm(){}

AForm::AForm(std::string name, bool issigned, int gradetosign, int gradetoexecute)
: _name(name), _issigned(issigned), _gradetosign(gradetosign), _gradetoexecute(gradetoexecute)
{
    if (_gradetosign < 1 || _gradetoexecute < 1)
        throw GradeTooLowException();
    else if (_gradetosign > 150 || _gradetoexecute > 150)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &obj) : _name(obj._name), _gradetosign(obj._gradetosign), _gradetoexecute(obj._gradetoexecute)
{
    *this = obj;
}


AForm& AForm::operator=(const AForm &rhs)
{
    _issigned = rhs._issigned;
    return (*this);
}

const std::string AForm::getName() const
{
    return (_name);
}

bool AForm::getIsSigned() const
{
    return (_issigned);
}

int AForm::getGradeToSign() const
{
    return (_gradetosign);
}

int AForm::getGradeToExecute() const
{
    return (_gradetoexecute);
}

std::ostream& operator<<(std::ostream& ost, const AForm &obj)
{
    ost << "Name: " << obj.getName() << ", SignedStatus: " << obj.getIsSigned() << ", GradeToSign:  " << obj.getGradeToSign() << ", GradeToExecute: " << obj.getGradeToExecute() << ".";
    return (ost);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}

const char *AForm::NotSignedException::what() const throw()
{
    return ("Form not signed!");
}

void AForm::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= _gradetosign)
        _issigned = 1;
    else if (obj.getGrade() > _gradetosign)
        throw GradeTooLowException();
}


void AForm::setTarget(std::string target)
{
    _target = target;
}

std::string AForm::getTarget() const
{
    return (_target);
}