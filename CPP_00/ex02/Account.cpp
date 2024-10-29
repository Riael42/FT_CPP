#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) 
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    char timestamp[20];

    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    std::strftime(timestamp, 20, "%Y%m%d_%H%M%S", now);
    std::cout << "[" << timestamp << "] index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) 
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    char timestamp[20];

    std::strftime(timestamp, 20, "%Y%m%d_%H%M%S", now);
    std::cout << "[" << timestamp << "] index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) 
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    char timestamp[20];

    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::strftime(timestamp, 20, "%Y%m%d_%H%M%S", now);
    std::cout << "[" << timestamp << "] index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) 
{
    char timestamp[20];
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    if (_amount >= withdrawal) 
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::strftime(timestamp, 20, "%Y%m%d_%H%M%S", now);
        std::cout << "[" << timestamp << "] index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    } 
    else 
    {

        std::strftime(timestamp, 20, "%Y%m%d_%H%M%S", now);
        std::cout << "[" << timestamp << "] index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    }
}

int Account::checkAmount(void) const 
{
    return _amount;
}

void Account::displayStatus(void) const 
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    char timestamp[20];

    std::strftime(timestamp, 20, "%Y%m%d_%H%M%S", now);
    std::cout << "[" << timestamp << "] index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::getNbAccounts(void) 
{
    return _nbAccounts;
}

int Account::getTotalAmount(void) 
{
    return _totalAmount;
}

int Account::getNbDeposits(void) 
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) 
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) 
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    char timestamp[20];

    std::strftime(timestamp, 20, "%Y%m%d_%H%M%S", now);
    std::cout << "[" << timestamp << "] " << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
