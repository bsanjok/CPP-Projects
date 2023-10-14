/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:43:50 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/12 10:02:38 by sbhatta          ###   ########.fr       */
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
    
    Fixed operator+(const Fixed &rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;
    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    Fixed & operator=(const Fixed& rhs);
    bool operator>=(const Fixed& rhs);
    bool operator<=(const Fixed& rhs);
    bool operator==(const Fixed& rhs);
    bool operator!=(const Fixed& rhs);
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    
    static const Fixed& min(const Fixed &lhs, const Fixed &rhs);
    static Fixed& min(Fixed &lhs, Fixed &rhs);
    static const Fixed& max(const Fixed &lhs, const Fixed &rhs);
    static Fixed& max(Fixed &lhs, Fixed &rhs);
};
std::ostream & operator<<(std::ostream& ost, const Fixed& fixed_pn);
#endif