#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int count = 0;
        for (int i = 0; i < N; i++) {
            int d;
            cin >> d;
            if (d >= 1000) count++;
        }
        cout << count << endl;
    }
    return 0;
}