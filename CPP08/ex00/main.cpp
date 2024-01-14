/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:34:49 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/17 19:33:04 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main(void)
{
    int tofind;

    tofind = 2;
    std::vector<int> intvector;
    intvector.push_back(1);
    intvector.push_back(2);
    intvector.push_back(3);
    intvector.push_back(2);
    intvector.push_back(5);
    if (easyfind(intvector, tofind) != -1)
        std::cout << "The element '" << tofind << "' first occured at index '" << easyfind(intvector, tofind) << "'!" << std::endl;
    else
        std::cout << "Couldn't find '" << tofind << "' in the container!" << std::endl;
    std::list<int> intlist;
    tofind = 4;
    intlist.push_back(1);
    intlist.push_back(2);
    intlist.push_back(3);
    intlist.push_back(4);
    intlist.push_back(5);
    if (easyfind(intlist, tofind) != -1)
    std::cout << "The element '" << tofind << "' first occured at index '" << easyfind(intlist, tofind) << "'!" << std::endl;
    else
        std::cout << "Couldn't find '" << tofind << "' in the container!" << std::endl;
    return (0);
}

