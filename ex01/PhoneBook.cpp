/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:37:38 by sbhatta           #+#    #+#             */
/*   Updated: 2023/09/12 18:12:50 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    
}

PhoneBook::~PhoneBook()
{
    
}

int PhoneBook::setContact(int index)
{
    std::cout << "Enter First Name: ";
    if(_contactArray[index].setVar("fname") == 0)
        return (0);
    std::cout << "Enter Last Name: ";
    if(_contactArray[index].setVar("lname") == 0)
        return (0);
    std::cout << "Enter Nickname: ";
    if(_contactArray[index].setVar("nname") == 0)
        return (0);
    std::cout << "Enter Phone Number: ";
    if(_contactArray[index].setVar("pnum") == 0)
        return (0);
    std::cout << "Enter Your Darkest Secrets: ";
    if (_contactArray[index].setVar("dsecr") == 0)
        return (0);
    return (1);
}

void PhoneBook::_formatContact(int index, std::string fname, std::string lname, std::string nname)
{
    std::cout.setf(std::ios::right);
    std::cout  << "|" << std::setfill(' ') << std::setw(10) << index + 1 << "|";
    if (fname.size() <= 10)
        std::cout << std::setfill(' ') << std::setw(10) <<  fname << "|";
    else
        std::cout << fname.substr(0, 9).append(".") << "|";
    if (lname.size() <= 10)
        std::cout << std::setfill(' ') << std::setw(10) << lname << "|";
    else
        std::cout << lname.substr(0, 9).append(".") << "|";
    if (nname.size() <= 10)
        std::cout << std::setfill(' ') << std::setw(10) << nname << "|";
    else
        std::cout << nname.substr(0, 9).append(".") << "|";
    std::cout << std::endl;
}

int PhoneBook::_is_number(std::string str)
{
    std::string::iterator it;

    for(it = str.begin(); it < str.end(); it++)
    {
        if (!isdigit(*it))
            return (0);
    }
    return (1);
}

int PhoneBook::getContact( )
{
    std::string entered;
    int index;
    
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for(int index = 0; index < 8; index++)
    {
        if (_contactArray[index].getVar("fname").empty())
            break ;
        _formatContact(index, _contactArray[index].getVar("fname"), \
        _contactArray[index].getVar("lname"), \
        _contactArray[index].getVar("nname"));
    }
    std::cout << "Index: ";
    std::cin >> entered;
    if (std::cin.eof())
		return (0);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if(!_is_number(entered))
        std::cout << "Enter positive index number!" << std::endl;
    else
    {
	std::istringstream ss(entered);
        ss >> index;
        std::cout << std::endl;
        if (index > 0 && index <= 8)
        {
            if (_contactArray[index - 1].getVar("fname").empty())
                std::cout << "Entered index is out of scope. Please try again!" << std::endl;
            else
            {
                std::cout << "First Name: " << _contactArray[index - 1].getVar("fname") << std::endl;
                std::cout << "Last Name: " << _contactArray[index - 1].getVar("lname") << std::endl;
                std::cout << "Nickname: " << _contactArray[index - 1].getVar("nname") << std::endl;
                std::cout << "Phone Number: " << _contactArray[index - 1].getVar("pnum") << std::endl;
                std::cout << "Dark Secrets: " << _contactArray[index - 1].getVar("dsecr") << std::endl;
            }
        }
        else
            std::cout << "Entered index is out of scope. Please try again!" << std::endl;
    }
    return (1);
}

void PhoneBook::printWelcome( void )
{
    std::cout << std::endl << "[ADD] saves a new contact." << std::endl;
    std::cout << "[SEARCH] displays a specific contact." << std::endl;
    std::cout << "[EXIT] Program quits and the contacts are lost forever!" << std::endl << std::endl;
}

int PhoneBook::checkCommand(int index)
{
    std::string cmd;

    std::cout << "Enter Command: ";
    std::cin >> cmd;
    if (std::cin.eof())
		return (-1);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (cmd == "ADD")
    {
        if (setContact(index) == 0)
            return (-1);
        std::cout << std::endl << "<<(RECORD SAVED)>>" << std::endl;
        return (1);
    }
    else if (cmd == "SEARCH")
    {
        if (getContact() == 0)
            return (-1);
    }
    else if (cmd == "EXIT")
        return -1;
    return (0);
}
