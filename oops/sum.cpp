#include <bits/stdc++.h>
using namespace std;

class SumOfNaturalNumbers {
private:
    int n;
    int sum;

public:
    SumOfNaturalNumbers(int number) {
        n = number;
        sum = 0;
    }

    void calculateSum() {
        sum = (n * (n + 1)) / 2;
    }

    void displaySum() {
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    SumOfNaturalNumbers obj(number);
    obj.calculateSum();
    obj.displaySum();

    return 0;
}