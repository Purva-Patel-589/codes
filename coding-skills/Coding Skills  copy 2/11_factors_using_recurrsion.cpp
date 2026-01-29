#include<iostream>
using namespace std;
void factors(int n,int i)
{
    if(i<=n)
    {
        if(n%i==0)
        cout<<i<<" ";
    
    factors(n,i+1);}
}
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<"factors of "<<n<<" are :"<<endl;
    factors(n,1);
    return 0;
}