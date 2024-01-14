/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:55:00 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/13 17:58:11 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<iomanip>
#include<limits>
#include<sstream>

class ScalarConverter {
    
private:
    static bool isTypeInt(std::string param);
    static void printInt(std::string param);
    static bool isTypeChar(std::string param);
    static void convertToChar(std::string param);
    static bool isTypeFloat(std::string param);
    static bool isTypeDouble(std::string param);
    static void convertToFloatDouble(std::string param);
    static bool isTypeNanInf(std::string param);
    ScalarConverter();
    ScalarConverter(const ScalarConverter &obj);
    ScalarConverter& operator=(const ScalarConverter &rhs);
    ~ScalarConverter();
    
public:
    static void convert(std::string param);
};