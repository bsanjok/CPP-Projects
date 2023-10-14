/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:35:33 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/14 11:44:16 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
class DiamondTrap : public FragTrap, public ScavTrap{

private:
    std::string _name;

public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &obj);
    DiamondTrap& operator=(const DiamondTrap &rhs);

    void whoAmI();
};

#endif