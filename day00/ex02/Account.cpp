// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Fri Sep 23 09:23:52 2022                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>
# define MAXSIZE 1024

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
	char time_buf[MAXSIZE];
	struct tm ts;
	time_t	unixTime = time(NULL);

	ts = *localtime(&unixTime);
	strftime(time_buf, MAXSIZE, "[%Y%m%d_%H%M%S]", &ts);

    std::cout << time_buf;
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
