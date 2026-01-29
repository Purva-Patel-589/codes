// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     if(n==0)
//     return 1;
//     else
//     return n*fact(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=i;j++)
//             cout<<fact(i)/(fact(j)*fact(i-j))<<"\t";
//             cout<<endl;
//     }

// }
// O(n2) complexity
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i <= n; i++) {
//         long long val = 1;   // C(i,0) = 1
//         for (int j = 0; j <= i; j++) {
//             cout << val << "\t";
//             val = val * (i - j) / (j + 1);  // next value in row
//         }
//         cout << endl;
//     }

//     return 0;
// }
// // next type with O(n2) but with space
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i <= n; i++) {
//         // print leading spaces
//         cout << string((n - i) * 2, ' ');

//         long long val = 1;  // first element of row
//         for (int j = 0; j <= i; j++) {
//             cout << setw(4) << val;  // format width for alignment
//             val = val * (i - j) / (j + 1);  // recurrence relation
//         }
//         cout << endl;
//     }

//     return 0;
// }
// same complexity bjut with space
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        int c=1;
        for(int k=n-i;k>0;k--)
            cout<<"  ";
        for(int j=0;j<=i;j++){
            if(j==0 || i==j)
                cout<<1<<"   ";
            else{
                c*=(i-j+1)/j;
                cout<<c<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}

