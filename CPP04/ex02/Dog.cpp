/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:59:11 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/06 12:34:12 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :  Animal("Dog"), _brain(new Brain())
{
    std::cout << "Dog Default constructor called!" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj), _brain(new Brain(*obj._brain))
{
    std::cout << "Dog copy constructor called!" << std::endl;
}
Dog& Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
    {
        delete _brain;
        _brain = new Brain(*rhs._brain);
        Animal::operator=(rhs);
    }
    std::cout << "Dog copy assignment operator is called!" << std::endl; 
    return (*this);
}

Brain* Dog::getBrain()
{
    return (_brain);
}

void Dog::makeSound() const
{
    std::cout << "Barkkkkkkkkkk~!" << std::endl;
}