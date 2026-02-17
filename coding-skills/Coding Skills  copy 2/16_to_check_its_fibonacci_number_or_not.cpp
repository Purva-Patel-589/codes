#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a = 0, b = 1;
    if (n == 0 || n == 1) {
        cout << "Yes";
        return 0;
    }
    while (b < n) {
        long long c = a + b;
        a = b;
        b = c;
    }
    if (b == n) cout << "Yes";
    else cout << "No";
    return 0;
}
