/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:38:41 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/11 18:05:02 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H
# include <iostream>
# include "Fixed.hpp"

class Point {

private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point& target);
	~Point();

	const Fixed getX() const;
	const Fixed getY() const;
	Point& operator=(const Point& rhs);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream & operator<<(std::ostream& ost, Point& point_var);

#endif