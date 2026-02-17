#include <bits/stdc++.h>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
        cout << "Account Constructor Called\n";
    }
};

class SavingsAccount : public Account {
    double interestRate;

public:
    SavingsAccount(int accNo, double bal, double rate)
        : Account(accNo, bal)   
    {
        interestRate = rate;
        cout << "SavingsAccount Constructor Called\n";
    }

    void display() {
        cout << "\n--- Savings Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%\n";
    }
};

class CurrentAccount : public Account {
    double cashCreditLimit;

public:
    CurrentAccount(int accNo, double bal, double limit)
        : Account(accNo, bal)
    {
        cashCreditLimit = limit;
        cout << "CurrentAccount Constructor Called\n";
    }

    void display() {
        cout << "\n--- Current Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Cash Credit Limit: " << cashCreditLimit << endl;
    }
};

int main() {
    SavingsAccount s1(101, 50000, 4.5);
    CurrentAccount c1(102, 30000, 15000);

    s1.display();
    c1.display();

    return 0;
}