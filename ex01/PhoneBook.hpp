/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:29:39 by sbhatta           #+#    #+#             */
/*   Updated: 2023/09/11 18:54:59 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>

class PhoneBook {
	
	public:
    PhoneBook( void );
    ~PhoneBook( void );
    
    void    setContact(int index);
    void    getContact( void );
    void    printWelcome( void );
    int    checkCommand(int index);
	
	private:
    Contact _contactArray[8];
    int     _arrayIndex;
};

#endif