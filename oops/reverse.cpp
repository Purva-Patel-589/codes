#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
            if (rev > INT_MAX || rev < INT_MIN) {
                return 0;
            }
        }
        return (int)rev;
    }
};

int main() {
    Solution sol;
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    int reversed = sol.reverse(number);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}