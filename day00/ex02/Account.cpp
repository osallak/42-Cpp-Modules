/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:22:44 by osallak           #+#    #+#             */
/*   Updated: 2022/09/22 20:29:55 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>


//defining static variables
	
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//Constructors && destructors

Account::Account(int initial_deposit)
	: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account( void )
{
	_totalAmount -= _amount;
	_nbAccounts--;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}


//static functions

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);		
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" <<  _nbAccounts << ";total:"<< _totalAmount << ";deposits:" << Account::getNbDeposits() << ";withrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp( void )
{
		time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%y%m%d_%OH%OM%OS] ");
}

//other mumber functions

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount;" << _amount + deposit << ";nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return true;
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex  << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withrawals:" << _nbWithdrawals << std::endl;
}
