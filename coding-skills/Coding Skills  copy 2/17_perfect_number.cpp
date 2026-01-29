#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = 1;
    if(n==1){
        cout<<"No";
        return 0;
    }
    for(long long i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            sum += i;
            if(i != n/i) sum += n/i;
        }
    }
    if(sum == n) cout << "Yes";
    else cout << "No";
    return 0;
}
