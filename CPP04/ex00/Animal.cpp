/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:53:16 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 13:18:33 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called!" << std::endl;
}

Animal::Animal(std::string type) :  _type(type)
{
    std::cout << "Animal initialization operator called!" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
    std::cout << "Animal copy constructor called!" << std::endl;
}

Animal& Animal::operator=(const Animal &rhs)
{
    this->_type = rhs._type;
    return (*this);
}

const std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "No sound!" << std::endl;
}