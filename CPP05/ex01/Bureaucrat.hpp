/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:25:44 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/10 16:34:22 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Form;

class Bureaucrat {

private:
    std::string const _name;
    int               _grade;
    
public:
    ~Bureaucrat();
    Bureaucrat();
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat& operator=(const Bureaucrat &rhs);
    Bureaucrat(const std::string name, int grade);
    
    const std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &obj) const;
    
    class GradeTooHighException : public std::exception
    {
        public:
        const char * what () const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        const char * what () const throw();
    };
};
std::ostream& operator<<(std::ostream& ost, const Bureaucrat& obj);