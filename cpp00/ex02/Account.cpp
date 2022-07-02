#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>

Account::Account(int initial_deposit)
{

}

Account::Account()
{

}

Account::~Account()
{

}

void	Account::_displayTimestamp(void)
{

}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{

}

void Account::makeDeposit(int deposit)
{

}

bool Account::makeWithdrawal(int withdrawal)
{
	return (0);
}

int Account::checkAmount(void) const
{
	return (0);
}

void Account::displayStatus(void) const
{
}
