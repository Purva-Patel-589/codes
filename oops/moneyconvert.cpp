#include <bits/stdc++.h>
using namespace std;

double toINR(double usd) {
    return usd * 88.5;   
}

double toEUR(double usd) {
    return usd * 0.92;   
}

int main() {
    double usd;

    cout << "Enter amount in USD: ";
    cin >> usd;

    cout << "Equivalent in INR: " << toINR(usd) << endl;
    cout << "Equivalent in EUR: " << toEUR(usd) << endl;

    return 0;
}