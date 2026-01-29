#include <bits/stdc++.h>
using namespace std;

class Passenger{
    int id; string name;
public:
    void set(int i,string n){id=i;name=n;}
    int getId(){return id;}
    string getName(){return name;}
    virtual double ticketPrice(){return 1000;}
};

class DomesticPassenger:public Passenger{
public:
    double ticketPrice(){return 800;}
};

class BusinessClassPassenger:public DomesticPassenger{
public:
    double ticketPrice(){return 2000;}
};

int main(){
    Passenger* p;
    Passenger a; a.set(1,"A");
    DomesticPassenger d; d.set(2,"B");
    BusinessClassPassenger b; b.set(3,"C");
    p=&a; cout<<p->ticketPrice()<<"\n";
    p=&d; cout<<p->ticketPrice()<<"\n";
    p=&b; cout<<p->ticketPrice()<<"\n";
}