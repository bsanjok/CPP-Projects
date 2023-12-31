/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:33:52 by sbhatta           #+#    #+#             */
/*   Updated: 2023/09/12 18:15:42 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>

class Contact{
	
	public:
	Contact( void );
	~Contact( void );
	int setVar(std::string flag);
	std::string getVar(std::string flag);
	
	private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _darkest_secret;
	std::string	_phone_number;
	int _var_in(std::string *var, std::string title);
};

#endif