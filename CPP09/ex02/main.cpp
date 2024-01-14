/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:32:25 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/24 18:31:46 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "No input numbers found. Example: ./PmergeMe 3 2 1" << std::endl;
        return (0);
    }
    PmergeMe obj;
    try 
    {
        for(int i = 1; i < argc; i++)
        {
            obj.loadElementsToStorage(argv[i]);
        }
        obj.checkDuplicate();
        obj.printInfo();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}