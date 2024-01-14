/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:26:47 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 17:47:54 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    _ideas = new std::string[100];
    std::cout << "Brain Class: Default Constructor Called!" << std::endl;
}

Brain::~Brain()
{
    delete[] _ideas;
    std::cout << "Brain Class: Destructor called!" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    // if (this != &obj)
    // {
        // delete[] _ideas;
        _ideas = new std::string[100];
        for(int i = 0; i < 100; ++i)
            this->_ideas[i] = obj._ideas[i];
        std::cout << "Brain Class: Copy Constructor called!" << std::endl;
    // }
}

Brain& Brain::operator=(const Brain &rhs)
{
    if (this != &rhs)
    {
        delete[] _ideas;
        _ideas = new std::string[100];
        for(int i = 0; i < 100; ++i)
            this->_ideas[i] = rhs._ideas[i];
    }
    std::cout << "Brain Class: Copy Assignment Operator called!" << std::endl;
    return (*this);
}

std::string Brain::getIdea(int index)
{
    return(_ideas[index]);
}

void Brain::setIdea(int i, std::string idea)
{
    this->_ideas[i] = idea;
}