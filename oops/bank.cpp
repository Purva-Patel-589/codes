#include<bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void showBalance() {
        cout << "Account Number: " << accountNumber 
             << " | Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1(101, 5000);

    acc1.showBalance();
    acc1.deposit(1500);
    acc1.showBalance();
    acc1.withdraw(2000);
    acc1.showBalance();
    acc1.withdraw(6000); 

    return 0;
}