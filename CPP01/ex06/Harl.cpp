/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:26:49 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/08 10:40:05 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl () {}

Harl::~Harl () {}

void Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int switchKey;

    switchKey = 5;
    void (Harl::*complain_list[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levelArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levelArray[i])
            switchKey = i;
    }
    switch (switchKey)
    {
        case 0:
            (this->*complain_list[0])();
            // let it fall
        case 1:
            (this->*complain_list[1])();
            // let it fall
        case 2:
            (this->*complain_list[2])();
            // let it fall
        case 3:
            (this->*complain_list[3])();
            break;
        default:
            std::cout << "Are you drunk? Complain properly!" << std::endl;
            break;
    }
}
