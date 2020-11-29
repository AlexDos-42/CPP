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
    std::cout << "\e[93mNuméro de compte: " << _accountIndex << "\e[0m" << std::endl;
    std::cout << "dépot initial: " << initial_deposit << std::endl;
    std::cout << "\e[92mCompte créé\e[0m" << std::endl;
}

Account::~Account()
{
    std::cout << "\e[93mNuméro de compte: " << _accountIndex << "\e[0m" << std::endl;
    std::cout << "Argent sur le compte: " << _amount << std::endl;
    std::cout << "\e[92mCompte cloturé\e[0m" << std::endl;
    _nbAccounts -= 1;
}

int	Account::getNbAccounts( void )
{
    return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return(_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    std::cout << "Nombre de comptes: " << _nbAccounts << std::endl;
    std::cout << "Argent sur tous les comptes: " << _totalAmount << std::endl;
    std::cout << "Nombre de dépots: " << _totalNbDeposits << std::endl;
    std::cout << "Nombre de retraits: " << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    std::cout << "\e[93mNuméro de compte: " << _accountIndex << "\e[0m" << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    std::cout << "Argent sur le compte: " << _amount << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    std::cout << "\e[93mNuméro de compte: " << _accountIndex << "\e[0m" << std::endl;
    std::cout << "Argent sur le compte: " << _amount << std::endl;
    if (withdrawal > _amount)
    {
        std::cout << "\e[91mFonds insufisants; retrait refusé\e[0m" << std::endl;
        return (false);
    }
    else
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbDeposits++;
        std::cout << "Argent sur le compte: " << _amount << std::endl;
    }
    
    return (true);
}

int		Account::checkAmount() const
{
    return(_amount);
}

void	Account::displayStatus() const
{
    std::cout << "\e[93mNuméro de compte: " << _accountIndex << "\e[0m" << std::endl;
    std::cout << "Argent sur le compte: " << _amount << std::endl;
    std::cout << "Nombre de dépots: " << _nbDeposits << std::endl;
    std::cout << "Nombre de retraits: " << _nbWithdrawals << std::endl;
}