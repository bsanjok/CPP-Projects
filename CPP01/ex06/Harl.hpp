/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:24:14 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/07 12:36:57 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
# include <iostream>

class Harl
{
    public:
    Harl( void );
    ~Harl( void );
    void complain( std::string level);
    
    private:
    void debug( void );
    void info (void );
    void warning ( void );
    void error ( void );
};

#endif