#include "Bank.h"

Bank::Bank() {
    Balance = 0;
    WithdrawlAmount = 0;
    DepositAmount = 0;
}

Bank::Bank(double b) {
    Balance = b;
    WithdrawlAmount = 0;
    DepositAmount = 0;
}

double Bank::getBalance() const {
    return Balance;
}

void Bank::setBalance(double b) {
    Balance = b;
}

double Bank::getWithdrawlAmount() const {
    return WithdrawlAmount;
}

void Bank::setWithdrawlAmount(double w) {
    WithdrawlAmount = w;
}

double Bank::getDepositAmount() const {
    return DepositAmount;
}

void Bank::setDepositAmount(double d) {
    DepositAmount = d;
}

void Bank::Withdrawl() {
    Balance -= WithdrawlAmount;
}

void Bank::Deposit() {
    Balance += DepositAmount;
}

bool Bank::GetChoice() {
    char Choice = ' ';
    cout << "Would you like to play again?";
    if (tolower(Choice) == 'y')
        return true;
    return false;
}

void Bank::ProcessChoice() {
    if (GetChoice() == true)
        cout << "Welcome back" << endl;
    else
        cout << "Thanks for playing" << endl;
}

// Path: Bank.h