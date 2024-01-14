/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:10:00 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/11 14:35:04 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>
#include <string>

class ShrubberyCreationForm : public AForm{

private:
    void formTask(std::string target) const;

public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
    ShrubberyCreationForm(std::string target);

    void execute(Bureaucrat const &executor) const;
};