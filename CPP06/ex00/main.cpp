/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:19:32 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/13 18:29:46 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    std::string parameter;
    
    if (argc > 2 || !argv[1] || !*argv[1])
        std::cout << "Invalid arguments!" << std::endl \
        << "Example: [./ex00 parameter]" << std::endl \
        << "For char: [./ex00 'parameter']" << std::endl;
    else
    {
        parameter += argv[1];
        ScalarConverter::convert(parameter);
    }
    return (0);
}