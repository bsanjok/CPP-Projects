/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:11:50 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/13 17:55:05 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap{
private:

protected:
    std::string		_name;
    unsigned int	_hitpoints;
    unsigned int	_energypoints;
    unsigned int	_attackdamage;

public:
    ClapTrap();
	ClapTrap(std::string name);
    ClapTrap(std::string name, unsigned int hitp, unsigned int energyp, unsigned int attackd);
    ClapTrap(const ClapTrap &obj);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap &rhs);
    
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif