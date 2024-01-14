/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:41:13 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/10 16:37:18 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

class Bureaucrat;

class Form {

private:
    const std::string _name;
    bool _issigned;
    const int _gradetosign;
    const int _gradetoexecute;
    
public:
    Form();
    ~Form();
    Form(const Form &obj);
    Form& operator=(const Form &obj);
    Form(std::string name, bool issigned, int gradetosign, int gradetoexecute);

    const std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(Bureaucrat &obj);
    class GradeTooHighException : public std::exception
    {
        public:
            const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char * what() const throw();
    };
};
std::ostream& operator<<(std::ostream& ost, const Form &obj);