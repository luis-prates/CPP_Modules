/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:57:33 by lprates           #+#    #+#             */
/*   Updated: 2022/06/11 18:49:56 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iostream>
# include <sstream>
# include <string>
#include <ostream>
# include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "index:"
	<< _accountIndex
	<< ";amount:"
	<< checkAmount()
	<< ";created" 
	<< std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	_nbAccounts--;
	_totalAmount -= _amount;
	std::cout
	<< "index:" << Account::_accountIndex
	<< ";amount:" << checkAmount()
	<< ";closed"
	<< std::endl;
}

int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout
	<< "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";p_amount:" << checkAmount()
	<< ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout
	<< ";amount:" << checkAmount()
	<< ";nb_deposits:"<< _nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";p_amount:" << checkAmount()
	<< ";withdrawal:";
	if (withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << withdrawal
	<< ";amount:" << checkAmount()
	<< ";nb_withdrawals:"<< _nbWithdrawals
	<< std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << _amount <<
	";deposits:" << _nbDeposits <<
	";withdrawals:" << _nbWithdrawals
	<< std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t		rawtime;
	struct tm	*timeinfo;
	char buffer[80];

	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
}


