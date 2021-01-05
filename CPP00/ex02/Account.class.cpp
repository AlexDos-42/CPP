#include <iostream>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    std::cout << "index:\e[94m" << _accountIndex << "\e[0m;amount:\e[94m" << initial_deposit;
    std::cout << "\e[0m;created" << std::endl;
}

Account::~Account()
{
    std::cout << "index:\e[94m" << _accountIndex << "\e[0m;amount:\e[94m" << _amount;
    std::cout << "\e[0m;closed" << std::endl;
    _nbAccounts -= 1;
}

int	Account::getNbAccounts(void)
{
    return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
    return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
    std::cout << "accounts:\e[94m" << _nbAccounts;
    std::cout << "\e[0m;total:\e[94m" << _totalAmount;
    std::cout << "\e[0m;deposits:\e[94m" << _totalNbDeposits;
    std::cout << "\e[0m;withdrawals:\e[94m" << _totalNbWithdrawals << "\e[0m" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    std::cout << "index:\e[94m" << _accountIndex << "\e[0m" << "\e[0m;p_amount:\e[94m" << _amount << "\e[0m"
		<< ";deposit:\e[94m" << deposit << "\e[0m";
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    std::cout << ";amount:\e[94m" << _amount << "\e[0m"; 
	std::cout << ";nb_deposits:\e[94m" << _nbDeposits << "\e[0m" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    std::cout << "index:\e[94m" << _accountIndex << "\e[0m";
    std::cout << ";p_amount:\e[94m" << _amount << "\e[0m";
    if (withdrawal > _amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbDeposits++;
        std::cout << ";withdrawal:\e[94m" << withdrawal << "\e[0m;amount:\e[94m" << _amount;
    	std::cout << "\e[0m;withdrawals:\e[94m" << _nbWithdrawals << "\e[0m" << std::endl;
    }
    
    return (true);
}

int		Account::checkAmount() const
{
    return(_amount);
}

void	Account::displayStatus() const
{
    std::cout << "index:\e[94m" << _accountIndex << "\e[0m";
    std::cout << "\e[0m;amount:\e[94m" << _amount;
    std::cout << "\e[0m;deposits:\e[94m" << _nbDeposits;
    std::cout << "\e[0m;withdrawals:\e[94m" << _nbWithdrawals << "\e[0m" << std::endl;
}