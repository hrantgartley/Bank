#include "Bank.h"


int main() {
    Bank b1(2000);
    Bank b2(1000);
    b1.setDepositAmount(100);
    b1.Deposit();
    b1.setWithdrawlAmount(50);
    b1.Withdrawl();
    b2.setDepositAmount(100);
    b2.Deposit();
    b2.setWithdrawlAmount(50);
    b2.Withdrawl();
    cout << "First Account Balance: " << b1.getBalance() << endl;
    cout << "Second Account Balance: " << b2.getBalance() << endl;
    b1.GetChoice();
    return 0;
}

