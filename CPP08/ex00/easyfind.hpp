/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:44:35 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/17 17:50:09 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

template<typename T>
int easyfind(const T &x, int i)
{
    typename T::const_iterator it;
    it = std::find(x.begin(), x.end(), i);

    if (it != x.end())
        return (std::distance(x.begin(), it));
    return (-1);
}
