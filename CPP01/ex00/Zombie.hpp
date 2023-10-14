/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:15:41 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/05 13:04:14 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie( void );
        Zombie( std::string name );
        ~Zombie();
        void announce( void );
        static Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};

#endif