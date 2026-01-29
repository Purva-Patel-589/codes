#include<iostream>
using namespace std;
int digits(int n)
{
    if(n==0)
    return 0;
    else 
    return n%10+digits(n/10);
}
int main()
{
    int n;
    cout<<"enter number :";
    cin>>n;
    cout<<"sum of digits = "<<digits(n);
    return 0;
}