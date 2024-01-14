/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:59:11 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 13:17:07 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :  Animal("Dog")
{
    std::cout << "Dog Default constructor called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Dog copy constructor called!" << std::endl;
}
Dog& Dog::operator=(const Dog &rhs)
{
    Animal::operator=(rhs);
    std::cout << "Dog copy assignment operator is called!" << std::endl; 
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Barkkkkkkkkkk~!" << std::endl;
}