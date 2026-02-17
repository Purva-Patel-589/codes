#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    cout << "Enter elements in array:" << endl;
    int negCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) negCount++;
        arr[i] = abs(arr[i]);
    }

    // Find min absolute value
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
    }

    // Compute sum
    long long sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    // If odd number of negatives, subtract twice the smallest absolute
    if (negCount % 2 != 0) sum -= 2 * minVal;

    cout << "Maximum sum = " << sum << endl;
    return 0;
}