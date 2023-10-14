/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:49:50 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/13 18:15:04 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include<iostream>
# include"ClapTrap.hpp"

class FragTrap: public ClapTrap{

  private:  
  
  public:
  FragTrap();
  ~FragTrap();
  FragTrap(const std::string name);
  FragTrap(const FragTrap &obj);
  FragTrap& operator=(const FragTrap &rhs);
  void highFivesGuys(void);
};

#endif