/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:54:58 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/13 18:28:05 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    *this = obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

bool ScalarConverter::isTypeInt(std::string param)
{
    if (param[0] == '-' || param[0] == '+')
        param.erase(param.begin());
    for(unsigned long i = 0; i < param.length(); i++)
    {
        if(!isdigit(param[i]))
            return false;
    }
    return (true);
}

void ScalarConverter::printInt(std::string param)
{
    int result;
    std::stringstream ss(param);

    ss >> result;
    if (param[0] == '.')
        std::cout << "int: " << static_cast<int>(result) << std::endl;
    else if (isTypeChar(param))
        std::cout << "int: " << static_cast<int>(param[0]) << std::endl;
    else if (ss.fail())
        std::cout << "int: Not displayable" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(result) << std::endl;
}

bool ScalarConverter::isTypeChar(std::string param)
{
    if (param.length() > 1 || param.length() == 0)
        return (false);
    else if (isdigit(param[0]))
        return (false);
    return (true);
}

void ScalarConverter::convertToChar(std::string param)
{
    int temp;
    std::stringstream ss(param);
    
    if (isTypeChar(param))
        std::cout << "char: " << param[0] << std::endl;
    else
    {
        ss >> temp;
        if(temp < 0)
            std::cout << "char: " << "impossible" << std::endl;
        else if (temp <= 31 || temp > 126)
            std::cout << "char: " << "Non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(temp) << std::endl;
    }
}


bool ScalarConverter::isTypeDouble(std::string param)
{
    int pointfound;

    pointfound = 0;
    if(param.length() == 1)
        return (false);
    else if(param.length() > 1)
    {
        if (param[0] == '-' || param[0] == '+')
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

bool ScalarConverter::isTypeFloat(std::string param)
{
    if (param.length() == 1)
        return (false);
    if((param.rfind('f') == param.find('f') && param[param.length() - 1] == 'f') || \
    (param.rfind('F') == param.find('F') && param[param.length() - 1] == 'F'))
    {
        param.erase(param.end() - 1);
        if (isTypeDouble(param) || isTypeInt(param))
            return(true);
    }
    return (false);
}

void ScalarConverter::convertToFloatDouble(std::string param)
{
    float floattemp;
    double doubletemp;

    if (isTypeFloat(param))
        param.erase(param.end() - 1);
    std::stringstream sf(param);
    sf >> floattemp;
    std::stringstream sd(param);
    sd >> doubletemp;
    if (isTypeChar(param))
    {
        std::cout << "Float: " << std::fixed << std::setprecision(1) \
        << static_cast<float>(param[0]) << "f" << std::endl;
        std::cout << "Double: " << std::fixed << std::setprecision(1) \
        << static_cast<double>(param[0]) << std::endl;
    }
    else
    {
        if (sf.fail())
            std::cout << "Float: " << "Non displayable" << std::endl;
        else
            std::cout << "Float: " << std::fixed << std::setprecision(1) \
            << static_cast<float>(floattemp) << "f" << std::endl;
        if (sd.fail())
            std::cout << "Double: " << "Non displayable" << std::endl;
        else
            std::cout << "Double: " << std::fixed << std::setprecision(1) \
            << static_cast<double>(doubletemp) << std::endl;
    }
}

bool ScalarConverter::isTypeNanInf(std::string param)
{
    std::string options[8] = {"inff", "+inff", "-inff", "inf" , "-inf", "+inf", "nan", "nanf"};
    for(int i = 0; i < 8; i++)
    {
        if (param == options[i])
            return (true);
    }
    return (false);
}

void ScalarConverter::convert(std::string param)
{
    if (isTypeNanInf(param))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << param << "f" << std::endl;
        std::cout << "double: " << param << std::endl;
    }
    else if (isTypeInt(param) || isTypeChar(param) || \
        isTypeFloat(param) || isTypeDouble(param))
    {
        convertToChar(param);
        printInt(param);
        convertToFloatDouble(param);
    }
    else
        std::cout << "Parameter '" << param \
        << "' not supported for the conversion!" << std::endl;
}