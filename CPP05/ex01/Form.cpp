/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:41:15 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/10 17:59:24 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("no_name"), _gradetosign(0), _gradetoexecute(0) {}

Form::~Form(){}

Form::Form(std::string name, bool issigned, int gradetosign, int gradetoexecute)
: _name(name), _issigned(issigned), _gradetosign(gradetosign), _gradetoexecute(gradetoexecute)
{
    if (_gradetosign < 1 || _gradetoexecute < 1)
        throw GradeTooLowException();
    else if (_gradetosign > 150 || _gradetoexecute > 150)
        throw GradeTooHighException();
}

Form::Form(const Form &obj) : _name(obj._name), _gradetosign(obj._gradetosign), _gradetoexecute(obj._gradetoexecute)
{
    *this = obj;
}


Form& Form::operator=(const Form &rhs)
{
    _issigned = rhs._issigned;
    return (*this);
}

const std::string Form::getName() const
{
    return (_name);
}

bool Form::getIsSigned() const
{
    return (_issigned);
}

int Form::getGradeToSign() const
{
    return (_gradetosign);
}

int Form::getGradeToExecute() const
{
    return (_gradetoexecute);
}

std::ostream& operator<<(std::ostream& ost, const Form &obj)
{
    ost << "Name: " << obj.getName() << ", SignedStatus: " << obj.getIsSigned() << ", GradeToSign:  " << obj.getGradeToSign() << ", GradeToExecute: " << obj.getGradeToExecute() << ".";
    return (ost);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= _gradetosign)
        _issigned = 1;
    else if (obj.getGrade() > _gradetosign)
        throw GradeTooLowException();
}