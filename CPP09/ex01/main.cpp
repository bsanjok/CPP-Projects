/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:01:35 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/23 14:10:30 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char **argv)
{
    if (argc != 2 || !*argv[1] || !argv[1] || !argv)
    {
        std::cout << "Invalid number of arguments! Format: ./RPN \"1 2 +\" " << std::endl;
    }
    else
    {
        RPN obj;
        std::string to_check;

        to_check = argv[1];

        try{
            std::cout << obj.calculator(to_check) << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }   
    }
    return (0);
}