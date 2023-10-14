/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:43:10 by sbhatta           #+#    #+#             */
/*   Updated: 2023/09/17 13:15:52 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( ){}

Contact::~Contact(){}

int	Contact::_var_in(std::string *var, std::string title)
{
	getline(std::cin, *var);
	if (std::cin.eof())
		return (0);
	if ((*var).empty())
	{
		std::cout << title << " cannot be empty. Please enter again!" << std::endl;
		std::cout << title << ": ";
		_var_in(var, title);
	}
	return (1);
}

int	Contact::setVar(std::string flag)
{
	if (flag == "fname")
	{
		if(_var_in(&_first_name, "First Name") == 0)
			return (0);
	}
	else if (flag == "lname")
	{
		if(_var_in(&_last_name, "Last Name") == 0)
			return (0);
	}
	else if (flag == "nname")
	{
		if(_var_in(&_nickname, "Nickname") == 0)
			return (0);
	}
	else if (flag == "pnum")
	{
		if(_var_in(&_phone_number, "Phone") == 0)
			return (0);
	}
	else if (flag == "dsecr")
	{
		if (_var_in(&_darkest_secret, "Darkest Secrets") == 0)
			return (0);
	}
	return (1);
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
