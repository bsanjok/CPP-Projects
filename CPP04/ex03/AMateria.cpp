/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:48:35 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/07 12:34:55 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::~AMateria(){}

AMateria::AMateria(const AMateria &obj)
{
    *this = obj;
}

AMateria& AMateria::operator=(const AMateria &rhs)
{
    this->type = rhs.type;
    return (*this);
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const & AMateria::getType() const
{
    return(this->type);
}

void AMateria::use(ICharacter& target)
{
    static_cast<void>(target);
}