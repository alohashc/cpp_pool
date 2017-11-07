/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:59:43 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 11:59:18 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts++), _amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0){
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed"  << std::endl;
}

int Account::getNbAccounts(void){
	return _nbAccounts;
}

int Account::getTotalAmount(void){
	return _totalAmount;
}

int Account::getNbDeposits(void){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void){
	time_t t = time(0);
	struct tm * now = localtime( & t );

	std::cout << "[" << (now->tm_year + 1900) << (now->tm_mon + 1) << now->tm_mday << "_" << now->tm_hour <<
	   now->tm_min << now->tm_sec << "] ";
}

void Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits <<
	  ";withdrawals:" << Account::_totalNbWithdrawals  << std::endl;
}

void Account::makeDeposit(int deposit){
	int p_amount = _amount;

	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit <<
	   ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
	int p_amount = _amount;

	if (this->_amount > withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal <<
	   ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	else
	{	
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
}

int Account::checkAmount(void) const{
	return this->_amount;
}

void Account::displayStatus(void) const{
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits <<
	";withdrawals:" << _nbWithdrawals <<  std::endl;
}
