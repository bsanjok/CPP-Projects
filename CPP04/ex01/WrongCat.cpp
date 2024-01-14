/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:34:00 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 13:35:01 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() :  WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default destructor called!" << std::endl;   
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat deconstructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
    WrongAnimal::operator=(rhs);
    std::cout << "WrongCat assignment operator called!" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Meaowwwwwwwwwww~!" << std::endl;
}