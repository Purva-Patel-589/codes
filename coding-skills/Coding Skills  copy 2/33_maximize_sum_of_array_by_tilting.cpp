#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);

    long long sum = 0;
    long long mn = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        long long val = abs(arr[i]);
        sum += val;
        mn = min(mn, val);
    }

    if (n % 2 == 1) {
        sum -= 2 * mn; // subtract twice the smallest absolute value
    }

    cout << sum << endl;
    return 0;
}
