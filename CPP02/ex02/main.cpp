/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:19:19 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/12 10:34:40 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const c( Fixed( 5.05f ) * Fixed( 3 ) );
    Fixed d( Fixed( 5.05f ) * Fixed( 4 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    
    a = Fixed(20.50f);
    std::cout << "a is now: " << a << std::endl;
    std::cout << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    
    std::cout << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    
    std::cout << std::endl;
    if (a > b)
        std::cout << "a is greater than b" << std::endl;
    else
        std::cout << "a is not greater than b" << std::endl;
    if (a < b)
        std::cout << "a is less than b" << std::endl;
    else
        std::cout << "a is not less than b" << std::endl;
    if (a >= b)
        std::cout << "a is greater or equal to b" << std::endl;
    else
        std::cout << "a is not greater or equal to b" << std::endl;
    if (a <= b)
        std::cout << "a is lesser or equal to b" << std::endl;
    else
        std::cout << "a is not lesser or equal to b" << std::endl;
    if (a == b)
        std::cout << "a equals to b" << std::endl;
    else
        std::cout << "a is not equal to b" << std::endl;
    if (a != b)
        std::cout << "a is not equal to b" << std::endl;
    else
        std::cout << "a equals to b" << std::endl;

    std::cout << std::endl;
    std::cout << "among " << a << " and " << d << ", " << Fixed::min(a, d) << " is min (fixed point min)" << std::endl << std::endl;
    std::cout << "among " << b << " and " << c << ", " << Fixed::min(b, c) << " is min (const fixed point min)" << std::endl << std::endl;
    std::cout << "among " << a << " and " << d << ", " << Fixed::max(a, d) << " is max (fixed point max)" << std::endl << std::endl;
    std::cout << "among " << b << " and " << c << ", " << Fixed::max(b, c) << " is max (const fixed point max)" << std::endl << std::endl;
    return 0;
}
