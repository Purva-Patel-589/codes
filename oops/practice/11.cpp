#include <bits/stdc++.h>
using namespace std;

class FoodItem{
    string name;
    double price;
public:
    FoodItem(string n,double p):name(n),price(p){}
    virtual int deliveryTime(){return 0;}
    virtual ~FoodItem(){}
};

class Pizza:public FoodItem{
public:
    Pizza(string n,double p):FoodItem(n,p){}
    int deliveryTime(){return 30;}
};

class Burger:public FoodItem{
public:
    Burger(string n,double p):FoodItem(n,p){}
    int deliveryTime(){return 15;}
};

class Salad:public FoodItem{
public:
    Salad(string n,double p):FoodItem(n,p){}
    int deliveryTime(){return 10;}
};

int main(){
    FoodItem* a=new Pizza("P",200);
    FoodItem* b=new Burger("B",100);
    FoodItem* c=new Salad("S",120);
    cout<<a->deliveryTime()<<endl;
    cout<<b->deliveryTime()<<endl;
    cout<<c->deliveryTime()<<endl;
}