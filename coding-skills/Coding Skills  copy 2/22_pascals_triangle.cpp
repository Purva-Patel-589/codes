// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     long long arr[n][n] = {0};

//     for(int i = 0; i < n; i++){
//         arr[i][0] = 1;
//         for(int j = 1; j <= i; j++){
//             arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//         }
//     }

//     for(int i = 0; i < n; i++){
//         for(int s = 0; s < n - i - 1; s++) cout << "  "; // leading spaces
//         for(int j = 0; j <= i; j++){
//             cout << arr[i][j] << "   "; // space between numbers
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long val = 1;
        for(int s = 0; s < n - i - 1; s++) cout << "  "; // leading spaces
        for(int j = 0; j <= i; j++){
            cout << val << "   "; // space between numbers
            val = val * (i - j) / (j + 1); // next value using formula
        }
        cout << endl;
    }
    return 0;
}
