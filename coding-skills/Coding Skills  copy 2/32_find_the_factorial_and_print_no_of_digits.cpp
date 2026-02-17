#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n == 0 || n == 1) {
        cout << "Factorial = 1" << endl;
        cout << "Number of digits = 1" << endl;
        return 0;
    }

    // Using logs to avoid overflow
    double digits = 0;
    for (int i = 2; i <= n; i++) {
        digits += log10(i);
    }

    cout << "Number of digits in " << n << "! = " << (int)digits + 1 << endl;

    return 0;
}
