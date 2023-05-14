#include <iostream>
using namespace std;

class Bank {
    double Balance;
    double WithdrawlAmount;
    double DepositAmount;
public:
    Bank();
    Bank(double);
    double getBalance() const;
    void setBalance(double);
    double getWithdrawlAmount() const;
    void setWithdrawlAmount(double);
    double getDepositAmount() const;
    void setDepositAmount(double);
    void Withdrawl();
    void Deposit();
};
