/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:40:40 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/24 18:19:45 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    if (loadDatabase())
        throw emptyDatabaseException();
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    *this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
    _ratemap = rhs._ratemap;
    return (*this);
}

int BitcoinExchange::loadDatabase()
{
    std::string line;
    std::ifstream in;
    std::string date;
    std::string value;
    std::string firstline;
    int count;
    float rate;

    count = 0;
    in.open("./src/data.csv");
    if (!in)
        std::cerr << "Database cannot be opened for loading!" << std::endl;
    if (!std::getline(in, firstline))
    {
        in.close();
        return (1);
    } 
    while(std::getline(in, line))
    {
        std::stringstream ss(line);
        if (!std::getline(ss, date, ','))
            throw invalidDatabaseException();
        if (!std::getline(ss, value, ','))
            throw invalidDatabaseException();
        std::stringstream sss(value);
        sss >> rate;
        _ratemap.insert(std::make_pair(date, rate));
        count++;
    }
    in.close();
    if (count == 0)
        return (1);
    return(0);
}

void BitcoinExchange::printMessage(std::string &date, float rate)
{
    if (rate < 0)
        std::cout << "Error: not a positive number." << std::endl;
    else if (rate > 1000)
        std::cout << "Error: too large a number." << std::endl;
    else if(!checkValidDate(date))
        std::cout << "Error: bad input => " << date << std::endl;
    else
        std::cout << date << " => " << rate << " = " << \
        (rate *  findPerfectIterator(date)->second) << std::endl;      
}

std::string BitcoinExchange::removeSpaces(const std::string &str)
{
    std::string result;
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (*it != ' ')
            result += *it;
    }
    return (result);
}

void BitcoinExchange::loadValues(std::string dir)
{
    std::string line;
    std::ifstream in;
    std::string date;
    std::string value;
    std::string firstline;
    float rate;

    in.open(dir.c_str());
    if (!in)
        std::cerr << "File cannot be opened for loading!" << std::endl;
    if (!std::getline(in, firstline))
        throw emptyInputException();
    while(std::getline(in, line))
    {
        std::stringstream ss(line);
        if ((line.find('|') == line.npos) || line[line.size() - 1] == '|')
           std::cout << "Error: bad input => " << line << std::endl;
        else
        {
            std::getline(ss, date, '|');
            date = removeSpaces(date);
            std::getline(ss, value);
            value = removeSpaces(value);
            std::stringstream sss(value);
            if (isTypePositiveFloat(value) || isTypePositiveInt(value))
            {
                sss >> rate;
                checkValidDate(date);
                printMessage(date, rate);
            }
            else
                std::cout << "Error: not a positive number." << std::endl; 
        }
    }
    in.close();
}

std::map<std::string, float> &BitcoinExchange::getRateMap()
{
    return (_ratemap);
}

std::map<std::string, float>::iterator BitcoinExchange::findPerfectIterator(std::string date_key)
{
    std::map<std::string, float>::iterator it;
    std::map<std::string, float>::iterator lastitem;
    
    lastitem = _ratemap.end();
    lastitem--;
    if (_ratemap.count(date_key))
        it = _ratemap.find(date_key);
    else if (date_key < _ratemap.begin()->first)
        it = _ratemap.begin();
    else if (date_key > lastitem->first)
        it = _ratemap.find(lastitem->first);
    else
    {
        it = _ratemap.lower_bound(date_key);
        it--;
    }
    return (it);
}

const char *BitcoinExchange::emptyDatabaseException::what() const throw()
{
    return ("Error: Empty database!");
}

const char *BitcoinExchange::emptyInputException::what() const throw()
{
    return ("Error: Empty database!");
}

const char *BitcoinExchange::invalidDatabaseException::what() const throw()
{
    return ("Error: invalid database entries!");
}

bool BitcoinExchange::checkCalendarDate(int month, int day)
{
    switch (month)
    {
        case 2:
            if (day <= 28)
                return (true);
            return (false);
        case 4:
        case 6:
        case 7:
        case 11:
            if (day <= 30)
                return (true);
            return (false);
        case 1:
        case 3:
        case 5:
        case 8:
        case 9:
        case 10:
        case 12:
            if (day <= 31)
                return (true);
            return (false);
        default:
            return (false);
    }
    return (false);
}

bool BitcoinExchange::checkValidDate(std::string date)
{
    int count;
    int year;
    int month;
    int day;
    std::string syear;
    std::string smonth;
    std::string sday;

    count = 0;
    std::stringstream ss(date);
    std::getline(ss, syear, '-');
    std::getline(ss, smonth, '-');
    std::getline(ss, sday);
    std::stringstream sy(syear);
    sy >> year;
    std::stringstream sm(smonth);
    sm >> month;
    std::stringstream sd(sday);
    sd >> day;
    for(size_t i = 0; i < date.size(); i++)
    {
        if(date[i] == '-')
            count++;
    }
    if(count != 2 || date.size() != 10)
        return (false);
    else if (syear.size() != 4 || month > 12 || year > 9999)
        return (false);
    if (!checkCalendarDate(month, day))
        return (false);
    return (true);
}

bool BitcoinExchange::isTypePositiveInt(std::string param)
{
    if (param[0] == '-' )
        return (false);
    else if (param[0] == '+')
        param.erase(param.begin());
    for(size_t i = 0; i < param.length(); i++)
    {
        if(!isdigit(param[i]))
            return false;
    }
    return (true);
}

bool BitcoinExchange::isTypePositiveFloat(std::string param)
{
    int pointfound;

    pointfound = 0;
    if(param.length() == 1)
        return (false);
    else if(param.length() > 1)
    {
        if (param[0] == '-')
            return (0);
        else if (param[0] == '+')
            param.erase(param.begin());
        for(unsigned long i = 0; i < param.length(); i++)
        {
            if(isdigit(param[i]))
                continue;
            else if (param[i] == '.' && pointfound == 0)
            {
                pointfound = 1;
                continue;
            }
            else
                return (false);
        }
        if (pointfound == 1)
            return (true);
    }
    return (false);
}