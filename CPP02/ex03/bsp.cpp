/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:53:23 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/11 18:27:40 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed calculateArea(Point const x1, Point const x2, Point const x3)
{
    Fixed area;

    area = (x1.getX() * (x2.getY() - x3.getY()) + x2.getX() * \
    (x3.getY() - x1.getY()) + x3.getX() * (x1.getY() - x2.getY())) / 2;
    if (area < 0)
        return (Fixed() - area);
    return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (calculateArea(a, b, c) == calculateArea(point, b, c) + \
    calculateArea(a, point, c) + calculateArea(a, b, point))
        return(true);
    else
        return (false);
}
