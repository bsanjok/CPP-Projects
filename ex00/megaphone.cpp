/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:49:57 by sbhatta           #+#    #+#             */
/*   Updated: 2023/09/11 15:24:55 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    char    ch;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            for(int j = 0; j < std::strlen(argv[i]); j++)
            {
                ch = toupper(argv[i][j]);
                std::cout << ch;
            }
        }
        std::cout << std::endl;
    }
    return (0);
}
