/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:25:00 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/13 17:04:15 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap{

private:

public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &obj);
    ScavTrap(std::string name);
    ScavTrap& operator=(const ScavTrap &rhs);
    void guardGate();
};

#endif