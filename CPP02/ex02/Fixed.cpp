/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:59:28 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/12 11:06:45 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixed_point = 0;
}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed& target)
{
    *this = target;
}

Fixed::Fixed(const int int_value)
{
    _fixed_point = int_value << _frac_bits;
}

Fixed::Fixed(const float float_value)
{
    _fixed_point = static_cast<int>(roundf(float_value * (1 << _frac_bits)));
}

//Operator Overloading Start
Fixed& Fixed::operator=(const Fixed& rhs)
{
    this->_fixed_point = rhs._fixed_point;
    return (*this);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
    return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
    return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
    return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
    return (Fixed(toFloat() / rhs.toFloat()));
}

bool Fixed::operator>(const Fixed &rhs) const
{
    return (toFloat() > rhs.toFloat());
}

bool Fixed::operator<(const Fixed &rhs) const
{
    return (toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(const Fixed &rhs)
{
    return (toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(const Fixed &rhs)
{
    return (toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(const Fixed &rhs)
{
    return (toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(const Fixed &rhs)
{
    return (toFloat() != rhs.toFloat());
}

//for post ++
Fixed Fixed::operator++(int)
{
    Fixed post(*this);
    this->_fixed_point++;
    return (post);
}

//for pre++
Fixed& Fixed::operator++()
{
    this->_fixed_point++;
    return (*this);
}

//for post--
Fixed Fixed::operator--(int)
{
    Fixed post(*this);
    this->_fixed_point--;
    return (post);
}

//for pre--
Fixed& Fixed::operator--()
{
    this->_fixed_point--;
    return (*this);
}
//Operator Overloading End

int Fixed::getRawBits() const
{
    return _fixed_point;
}

void Fixed::setRawBits(int const raw)
{
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

const Fixed& Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
    if (lhs < rhs)
        return (lhs);
    return (rhs);
}

Fixed& Fixed::min(Fixed &lhs, Fixed &rhs)
{
    if (lhs < rhs)
        return (lhs);
    return (rhs);
}

const Fixed& Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
    if (lhs > rhs)
        return (lhs);
    return (rhs);
}

Fixed& Fixed::max(Fixed &lhs, Fixed &rhs)
{
    if (lhs > rhs)
        return (lhs);
    return (rhs);
}

std::ostream& operator<<(std::ostream& ost, const Fixed& fixed_point)
{
    ost << fixed_point.toFloat();
    return (ost);
}
