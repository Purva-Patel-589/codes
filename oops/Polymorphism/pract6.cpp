#include <bits/stdc++.h>
using namespace std;

class Payment {
public:
    virtual void pay() = 0; 
    virtual ~Payment() {}   
};

class CreditCardPayment : public Payment {
public:
    void pay() override {
        cout << "Payment made using Credit Card." << endl;
    }
};

class UPIPayment : public Payment {
public:
    void pay() override {
        cout << "Payment made using UPI." << endl;
    }
};

class NetBankingPayment : public Payment {
public:
    void pay() override {
        cout << "Payment made using Net Banking." << endl;
    }
};

int main() {
    Payment* p;

    cout << "Select Payment Method:\n";
    cout << "1. Credit Card\n2. UPI\n3. Net Banking\n";
    int choice;
    cin >> choice;

    if (choice == 1)
        p = new CreditCardPayment();
    else if (choice == 2)
        p = new UPIPayment();
    else if (choice == 3)
        p = new NetBankingPayment();
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    p->pay();   

    delete p;   
    return 0;
}