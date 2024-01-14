/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:42:05 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/24 17:47:16 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctime>

class PmergeMe {

private:
    std::set<std::vector<int> > _paired_set;
    std::set<int> _main_chain_set;
    std::set<int> _pend_chain_set;
    std::vector<int> _storage;
    std::vector<std::vector<int> > _paired_vec;
    std::vector<int> _main_chain_vec;
    std::vector<int> _pend_chain_vec;
    int _struggler;
    bool _has_struggler;
    
public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &obj);
    PmergeMe& operator=(const PmergeMe &rhs);

    bool checkDuplicate();
    
    bool isTypeInt(std::string param);
    int convertToInt(std::string param);
    void loadStorageToSet();
    void loadElementsToStorage(std::string str);
    void createChainsSet();
    void mergeInsertChainsSet();
    int getInsertionPlace(int value_to_check);
    void sortWithSet();

    void createChainsVec();
    void loadStorageToVec();
    void sortWithVec();
    void mergeInsertChainsVec();

    void printContainerVec(std::vector<int> container);
    void printContainerSet(std::set<int> container);
    void printInfo();

    class inValidInputException : public std::exception
    {
        const char *what() const throw();
    };
    
    class containsDuplicateException : public std::exception
    {
        const char *what() const throw();
    };

    class onlyOneElementException : public std::exception
    {
        const char *what() const throw();
    };
};

