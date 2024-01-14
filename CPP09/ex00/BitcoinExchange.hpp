/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:40:37 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/20 17:24:24 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<sstream>
#include<iomanip>
#include<algorithm>
#include<exception>

class BitcoinExchange {

private:
    std::map<std::string, float> _ratemap;
    bool checkValidDate(std::string date);
    int loadDatabase();
    std::map<std::string, float>::iterator findPerfectIterator(std::string date_key);
    std::map<std::string, float> &getRateMap();
    void printMessage(std::string &date, float rate);
    bool checkCalendarDate(int month, int day);
    std::string removeSpaces(const std::string &str);
    bool isTypePositiveInt(std::string param);
    bool isTypePositiveFloat(std::string param);
    
public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &obj);
    BitcoinExchange& operator=(const BitcoinExchange &rhs);

    void loadValues(std::string map_dir);
    class emptyDatabaseException : public std::exception
    {
        const char *what() const throw();
    };
    class invalidDatabaseException : public std::exception
    {
        const char *what() const throw();
    };
    class emptyInputException : public std::exception
    {
        const char *what() const throw();
    };

};