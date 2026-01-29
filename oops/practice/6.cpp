#include <bits/stdc++.h>
using namespace std;

class Product{
    double price; string name;
public:
    void set(string n,double p){name=n;price=p;}
    double getPrice(){return price;}
    virtual double discountPrice(){return price;}
};

class Electronics:public Product{
public:
    double discountPrice(){return getPrice()*0.9;}
};

class Mobile:public Electronics{
public:
    double discountPrice(){return getPrice()*0.8;}
};

int main(){
    Product* p;
    Product pr; pr.set("X",10000);
    Electronics e; e.set("Y",20000);
    Mobile m; m.set("Z",30000);
    p=&pr; cout<<p->discountPrice()<<"\n";
    p=&e; cout<<p->discountPrice()<<"\n";
    p=&m; cout<<p->discountPrice()<<"\n";
}