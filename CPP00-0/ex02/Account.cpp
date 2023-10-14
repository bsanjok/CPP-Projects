/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:17:12 by sbhatta           #+#    #+#             */
/*   Updated: 2023/09/17 13:16:11 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts++;
    _totalAmount = _amount + _totalAmount;
    std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";created" << std::endl;
}


Account::~Account()
{
    _displayTimestamp();
   std::cout << " index:" << _accountIndex << ";";
   std::cout << "amount:" << _amount << ";" << "closed" << std::endl;
}

int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount = _amount + deposit;
    _totalAmount = _totalAmount + deposit;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposts:" << _nbDeposits << std::endl;
}


int Account::checkAmount() const
{
    if (_amount >= 0)
        return (1);
    return (0);
}

bool Account::makeWithdrawal( int withdrawl )
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    _amount = _amount - withdrawl;
    if (!checkAmount())
    {
        _amount = _amount + withdrawl;
        std::cout << "withdrawl:refused" << std::endl;
    }
    else
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount = _totalAmount - withdrawl;
        std::cout << "withdrawl:" << withdrawl << ";";
        std::cout << "amount:" << _amount << ";";
        std::cout << "nb_withdrawls:" << _nbWithdrawals << std::endl;
    }
    return 0;
}
void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";" \
    << "amount:" << _amount << ";" << "deposits:" \
    << _nbDeposits << ";" << \
    "withdrawls:" << _nbWithdrawals << std::endl; 
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";"  \
    << "amount:" << _totalAmount << ";" \
    << "deposits:" << _totalNbDeposits << ";" \
    << "withdrawls:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    char buffer[20];
    
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(now);

    std::tm* tm_info = std::localtime(&time);
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", tm_info);
    std::cout << buffer;
}
