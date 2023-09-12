/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:56:05 by sbhatta           #+#    #+#             */
/*   Updated: 2023/09/12 17:36:09 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    int i;
    int result;

    i = 0;
    PhoneBook instance;
    std::cout << "Welcome to world's worst PhoneBook! The program only accepts ADD, SEARCH and EXIT commands." << std::endl;
    while (1)
    {
        instance.printWelcome();
        result = instance.checkCommand(i);
        if (result == 1)
            i++;
        else if (result == -1)
            return (0);
        if (i == 8)
            i = 0;
    }
    return (0);
}