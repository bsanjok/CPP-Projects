/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:34:50 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/07 14:03:43 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl instance;

    if (argc != 2)
    {
        std::cout << "Invalid number of arguments!" << std::endl;
        return (0);
    }
    if (!argv[1] || !*argv[1])
    {
        std::cout << "Please complain properly! Missing complain!" << std::endl;
        return (0);
    }
    instance.complain(argv[1]);
    return (0);
}
