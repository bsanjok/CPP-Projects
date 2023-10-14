/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:02:35 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/05 14:20:20 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory Address by String Variable: " << &str << std::endl;
    std::cout << "Memory Address by String stringPTR: " << &stringPTR << std::endl;
    std::cout << "Memory Address by String stringREF: " << &stringREF << std::endl << std::endl;
    std::cout << "Value of the String Variable: " << str << std::endl;
    std::cout << "Value pointed to by String stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by String stringREF: " << stringREF << std::endl;
}
