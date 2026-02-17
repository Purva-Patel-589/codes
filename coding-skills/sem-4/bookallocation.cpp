#include <iostream>
#include <vector>
using namespace std;

// Check if allocation is possible with maxPages limit
bool isPossible(vector<int>& arr, int n, int k, long long maxPages) {
    int students = 1;
    long long pages = 0;

    for (int i = 0; i < n; i++) {
        // If a single book is greater than allowed pages
        if (arr[i] > maxPages)
            return false;

        if (pages + arr[i] > maxPages) {
            students++;
            pages = arr[i];

            if (students > k)
                return false;
        } else {
            pages += arr[i];
        }
    }
    return true;
}

int main() {
    int n, k;

    // Read input till EOF (same as Java code)
    while (cin >> n >> k) {
        vector<int> arr(n);

        long long sum = 0;
        int maxVal = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            maxVal = max(maxVal, arr[i]);
        }

        // If students > books
        if (k > n) {
            cout << -1 << endl;
            continue;
        }

        long long low = maxVal;
        long long high = sum;
        long long answer = -1;

        // Binary search on answer
        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (isPossible(arr, n, k, mid)) {
                answer = mid;
                high = mid - 1;   // try smaller max
            } else {
                low = mid + 1;    // need larger max
            }
        }

        cout << answer << endl;
    }

    return 0;
}
