#include <iostream>
using namespace std;
int main(){
    int n = 5; // change n
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int layer = max( max(i,j), max(n-1-i, n-1-j) );
            cout << ( layer-1) << (j==n-1 ? "" : " ");
        }
        cout << '\n';
    }
}
