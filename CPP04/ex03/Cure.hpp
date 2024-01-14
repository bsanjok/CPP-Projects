/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:09:45 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/07 12:27:35 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

private:
    std::string _type;
public:
    ~Cure();
    Cure();
    Cure(const Cure& obj);
    Cure& operator=(const Cure &rhs);
    
    AMateria* clone() const;
    void use(ICharacter& target);
};