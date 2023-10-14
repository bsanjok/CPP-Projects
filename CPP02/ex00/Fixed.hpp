/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:43:50 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/09 17:06:40 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed {
    private:
    static const int	_frac_bits = 8;
    int					_fixed_point;
    
    public:
    Fixed();
    Fixed(Fixed& target);
    Fixed& operator=(const Fixed& rhs);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif