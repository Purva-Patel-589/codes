#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int c=a;
    a=b;b=c;
}
void swap2(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
void swap3(int &a,int &b)
{
    int c=a;
    a=b;b=c;
}
int main()
{
    int a,b;
    cout<<"enter two numbers a and b"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"values after swapping by call by value a: "<<a<<" b : "<<b<<endl;
    swap2(&a,&b);
    cout<<"values after swapping by call by reference a: "<<a<<" b : "<<b<<endl;
    swap3(a,b);
    cout<<"values after swapping by call by address a: "<<a<<" b : "<<b<<endl;
    return 0;
}