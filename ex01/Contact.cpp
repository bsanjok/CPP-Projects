/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:43:10 by sbhatta           #+#    #+#             */
/*   Updated: 2023/09/11 18:04:22 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( )
{
	// std::cout << "Constructor was called!" << std::endl;
	// return;
}

Contact::~Contact()
{
	// std::cout << "Destructor was called!" << std::endl;
	// return;
}

void	Contact::setVar(std::string flag)
{
	if (flag == "lname")
		std::cin >> _last_name;
	else if (flag == "fname")
		std::cin >> _first_name;
	else if (flag == "nname")
		std::cin >> _nickname;
	else if (flag == "pnum")
		std::cin >> _phone_number;
	else if (flag == "dsecr")
		std::cin >> _darkest_secret;
}

std::string	Contact::getVar(std::string flag)
{
	if (flag == "lname")
		return _last_name;
	else if (flag == "fname")
		return _first_name;
	else if (flag == "nname")
		return _nickname;
	else if (flag == "pnum")
		return _phone_number;
	else if (flag == "dsecr")
		return _darkest_secret;
	return NULL;
}
