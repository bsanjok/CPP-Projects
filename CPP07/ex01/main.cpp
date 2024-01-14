/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:04:30 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/14 15:51:18 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
    std::cout << "<TEST1: STRING ARRAY>" << std::endl;
    std::string strarray[8] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight"};
    size_t arraylen = 8;
    ::iter<std::string>(strarray, arraylen, ::printElement<std::string>);
    std::cout << std::endl << "<TEST2: INT ARRAY>" << std::endl;
    int intarray[5] = {1, 2, 3, 4, 5};
    int intarraylen = 5;
    ::iter<int>(intarray, intarraylen, ::printElement<int>);
    std::cout << std::endl << "<EXTRA TEST: INT ARRAY(Increment Function)>" << std::endl;
    int intarrays[5] = {1, 2, 3, 4, 5};
    int intarrayl = 5;
    ::iter<int>(intarrays, intarrayl, ::incrementElement<int>);
    return (0);
}
