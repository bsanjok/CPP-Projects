/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:50:05 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/07 14:20:37 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    for (int j = 0; j < 4; j++)
    {
        if (materiaslots[j] == 1)
            delete materia[j];
    }
}

MateriaSource::MateriaSource()
{
    for (int j = 0; j < 4; j++)
        materiaslots[j] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    for(int i = 0; i < 4; i++)
    {
        delete materia[i];
        materia[i] = obj.materia[i];
        materiaslots[i] = obj.materiaslots[i];
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs)
{
    for(int i = 0; i < 4; i++)
    {
        delete materia[i];
        materia[i] = rhs.materia[i]->clone();
        materiaslots[i] = rhs.materiaslots[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* ptr)
{
    int index;
    
    index = 0;
    while (index < 4 && materiaslots[index] == 1)
        index++;
    if (index < 4 && materiaslots[index] == 0)
    {
        materia[index] = ptr;
        materiaslots[index] = 1;
    }
    else
        delete ptr;
        
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i < 4; i++)
    {
        if (materiaslots[i] == 1 && materia[i]->getType() == type)
            return(materia[i]->clone());
    }
    return (0);
}