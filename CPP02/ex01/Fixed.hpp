/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:43:50 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/11 14:17:10 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed {

private:
    static const int	_frac_bits = 8;
    int					_fixed_point;
    
public:
    Fixed();
    Fixed(const int int_value);
    Fixed(const float float_value);
    Fixed(const Fixed& target);
    ~Fixed();
    
    Fixed& operator=(const Fixed& rhs);
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream & operator<<(std::ostream& ost, const Fixed& fixed_pn);
#endif