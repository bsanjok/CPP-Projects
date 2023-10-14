/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:15:41 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/05 14:00:27 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
    private:
        std::string _name;
        void setName(std::string name);
    public:
        Zombie( void );
        Zombie( std::string name );
        ~Zombie();
        void announce( void );
        static Zombie* zombieHorde( int N, std::string name );
};

#endif