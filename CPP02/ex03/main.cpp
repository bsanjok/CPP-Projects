/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:19:19 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/12 12:17:07 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "Point.hpp"

int main( void ) 
{
    Point const a(0, 0);
    Point const b(10, 0);
    Point const c(0, 10);
    Point const point(5, 1);

    if(bsp(a, b, c, point) ==  true)
        std::cout << "The point belongs to triangle." << std::endl;
    else
        std::cout << "The point doesn't belong to triangle." << std::endl;
    return (0);    
}
