/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:40:35 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/19 18:25:49 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2 || !*argv || !argv || !*argv[1])
    {
        std::cout << "Invalid parameter" << std::endl; 
        return (0);
    }
    try
    {
        BitcoinExchange obj;
        obj.loadValues(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}