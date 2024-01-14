/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:05:19 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/07 12:28:25 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

private:
    std::string _type;
    
public:
    ~Ice();
    Ice();
    Ice(const Ice& obj);
    Ice& operator=(const Ice &rhs);
    
    AMateria* clone() const;
    void use(ICharacter& target);
};