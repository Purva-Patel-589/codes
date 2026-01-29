#include <iostream>
using namespace std;

int main() {
    long long n,r;
    cin >> n >> r;
    long long s=0,t=n;
    while(t>0){
        s+=t%10;
        t/=10;
    }
    long long x=s*r;
    while(x>9){
        long long y=0;
        while(x>0){
            y+=x%10;
            x/=10;
        }
        x=y;
    }
    cout<<x;
    return 0;
}
