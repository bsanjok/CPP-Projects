/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nosed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:14:04 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/08 10:58:10 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOSED_H
# define NOSED_H
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>

class Nosed
{
    private:
    std::string _s1;
    std::string _s2;
    std::string _fname;
    std::string _buffer;
    std::size_t _found;
    
    public:
    Nosed( void );
    Nosed( std::string s1, std::string s2, std::string fname );
    ~Nosed();
    std::string getS1 ( void ) const;
    std::string getS2 ( void ) const;
    std::string getFname ( void ) const;
    std::string getFout ( void ) const;
    std::string *getBuffer();
    void setBuffer( std::string buff);
    int findS1(int pos);
    int myReplace();
};

#endif