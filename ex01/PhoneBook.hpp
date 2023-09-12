/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:29:39 by sbhatta           #+#    #+#             */
/*   Updated: 2023/09/12 18:12:54 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>
# include <iomanip>

class PhoneBook {
	
	public:
    PhoneBook( void );
    ~PhoneBook( void );
    
    int     setContact(int index);
    int     getContact( void );
    void    printWelcome( void );
    int     checkCommand(int index);
	
	private:
    void    _formatContact(int index, std::string fname, std::string lname, std::string nname);
    int     _is_number(std::string str);
    Contact _contactArray[8];
    int     _arrayIndex;
};

#endif