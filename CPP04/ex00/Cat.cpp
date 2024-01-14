/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:35:24 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 13:17:01 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() :  Animal("Cat")
{
    std::cout << "Cat default destructor called!" << std::endl;   
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called!" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
    Animal::operator=(rhs);
    std::cout << "Cat assignment operator called!" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meaowwwwwwwwwww~!" << std::endl;
}