/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:55:43 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/27 02:00:54 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <sstream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account:: Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount = getTotalAmount() + initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	_nbAccounts++;
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl; 
}

Account:: ~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl; 
}

int	Account:: getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account:: getTotalAmount( void )
{
    return (_totalAmount);
}
int	Account:: getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int	Account:: getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}
void Account:: displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout   << "accounts:"      << getNbAccounts()
                << ";total:"        << getTotalAmount()
                << ";deposits:"     << getNbDeposits()
                << ";withdrawals:"  << getNbWithdrawals()
                << std::endl;
}
void	Account:: makeDeposit( int deposit )
{
    if (deposit <= 0)
        return ;
    _displayTimestamp();
    std::cout   << "index:"     << _accountIndex
                << ";p_amount:" << _amount
                << ";deposit:"  << deposit;

    _nbDeposits++;
    _totalNbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;

    std::cout   << ";amount:"       << _amount
                << ";nb_deposits:"  << _nbDeposits
                << std::endl;
}
bool	Account:: makeWithdrawal( int withdrawal )
{
    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout   << "index:"         << _accountIndex
                    << ";p_amount:"     << _amount
                    << ";withdrawal:"   << "refused"
                    << std::endl;
        return (false);
    }

    _displayTimestamp();
    std::cout   << "index:"             << _accountIndex
                << ";p_amount:"         << _amount;

    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;

     std::cout  << ";withdrawal:"       << withdrawal
                << ";amount:"           << _amount
                << ";nb_withdrawals:"   << _nbWithdrawals
                << std::endl;
    return (true);
}

void	Account:: displayStatus( void ) const
{
    _displayTimestamp();
    std::cout   << "index:"         << _accountIndex
                << ";amount:"       << _amount
                << ";deposits:"     << _nbDeposits
                << ";withdrawals:"  << _nbWithdrawals
                << std::endl; 
}

void	Account:: _displayTimestamp( void )
{
    std::time_t currentTime = std::time(NULL);
    std::tm* timeinfo = std::localtime(&currentTime);
    std::stringstream ss;
    char buffer[80];
    
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timeinfo);
    std::string formattedTimestamp(buffer);

    std::cout << "[" << formattedTimestamp << "] ";
}
