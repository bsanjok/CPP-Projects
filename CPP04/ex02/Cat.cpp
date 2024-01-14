/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:35:24 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/06 12:32:20 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() :  Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat default destructor called!" << std::endl;   
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat deconstructor called!" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj), _brain(new Brain(*obj._brain))
{
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
    {
        delete _brain;
        _brain = new Brain(*rhs._brain);
        Animal::operator=(rhs);
    }
    std::cout << "Cat assignment operator called!" << std::endl;
    return (*this);
}

Brain* Cat::getBrain()
{
    return (_brain);
}

void Cat::makeSound() const
{
    std::cout << "Meaowwwwwwwwwww~!" << std::endl;
}