#include <iostream>
#include <ctime>
#include <cstdlib>

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
    double getDepositAmount() const;
    void setWithdrawlAmount(double);
    void setDepositAmount(double);
    void Withdrawl();
    void Deposit();
    bool GetChoice();
    void ProcessChoice();
};

