/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:59:28 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/11 18:31:34 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fixed_point = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& target)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = target;
}

Fixed::Fixed(const int int_value)
{
    std::cout << "Int constructor called" << std::endl;
    _fixed_point = int_value << _frac_bits;
}

Fixed::Fixed(const float float_value)
{
    std::cout << "Float constructor called" << std::endl;
    _fixed_point = static_cast<int>(roundf(float_value * (1 << _frac_bits)));
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_point = rhs._fixed_point;
    return (*this);
}


int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixed_point = raw;
}

float Fixed::toFloat() const
{
    return(static_cast<float>(this->_fixed_point) / (1 << _frac_bits));
}

int Fixed::toInt() const
{
    return(this->_fixed_point >> _frac_bits);
}

std::ostream& operator<<(std::ostream& ost, const Fixed& fixed_point)
{
    return (ost << fixed_point.toFloat());
}
