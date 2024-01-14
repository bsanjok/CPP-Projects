/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:08:30 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/06 16:40:33 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

private:
    AMateria *materia[4];
    int materiaslots[4];
public:
    ~MateriaSource();
    MateriaSource();
    MateriaSource(const MateriaSource &obj);
    MateriaSource& operator=(const MateriaSource &rhs);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};