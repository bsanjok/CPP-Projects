/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:53:33 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/11 14:23:27 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::~Point(){}

Point::Point(const Point& target) : _x(target._x), _y(target._y)
{
}

Point& Point::operator=(const Point& rhs)
{
    (void)rhs;
    return (*this);
}

const Fixed Point::getX() const
{
    return(_x);
}

const Fixed Point::getY() const
{
    return(_y);
}

std::ostream& operator<<(std::ostream& ost, Point& point_var)
{
    ost << point_var.getX();
    ost << point_var.getY();
    return (ost);
}