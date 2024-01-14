/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:51:57 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/14 15:40:53 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename TAddr, typename UArrlen, typename VEle>
void iter(TAddr *x, UArrlen y, void (*FuncPtr)(VEle z))
{
    for(UArrlen i = 0; i < y; i++)
    {
        FuncPtr(x[i]);
    }
}

template<typename VElement>
void printElement(VElement x)
{
    std::cout << "[" << x << "] " << std::endl;
}

template<typename VElement>
void incrementElement(VElement x)
{
    x++;
    std::cout << "[" << x << "] " << std::endl;
}