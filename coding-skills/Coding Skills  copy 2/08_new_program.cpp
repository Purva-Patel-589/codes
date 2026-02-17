#include<iostream>
using namespace std;
class Rectangle
{
    public: int area,length,breadth;
    void input()
    {
        cout<<"enter length and breadth "<<endl;
        cin>>length;cin>>breadth;
    }
    void area_cal()
    {
        area =length*breadth;
    
      cout<<"area of rectangle is = "<<area<<endl;}
};
int main()
{
    Rectangle obj;
    obj.input();
    obj.area_cal();
    return 0;
}