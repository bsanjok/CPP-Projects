/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:41:13 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/11 16:01:04 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm {

private:
    const std::string _name;
    bool _issigned;
    const int _gradetosign;
    const int _gradetoexecute;
    std::string _target;
    
public:
    AForm();
    virtual ~AForm();
    AForm(const AForm &obj);
    AForm& operator=(const AForm &obj);
    AForm(std::string name, bool issigned, int gradetosign, int gradetoexecute);

    const std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    std::string getTarget() const;
    void setTarget(std::string target);

    void beSigned(Bureaucrat &obj);
    virtual void execute(Bureaucrat const & executor) const = 0;
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
    class NotSignedException : public std::exception
    {
        public:
            const char * what() const throw();
    };
};
std::ostream& operator<<(std::ostream& ost, const AForm &obj);