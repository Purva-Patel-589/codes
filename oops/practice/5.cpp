#include <bits/stdc++.h>
using namespace std;

class Transport{
    string reg;
public:
    void setReg(string r){reg=r;}
    string getReg(){return reg;}
    virtual int speed()=0;
};

class RoadTransport:public Transport{
public:
    int speed(){return 0;}
};

class Bike:public RoadTransport{
public:
    int speed(){return 60;}
};

class Truck:public RoadTransport{
public:
    int speed(){return 40;}
};

int main(){
    Transport* p;
    Bike b; b.setReg("B1");
    Truck t; t.setReg("T1");
    p=&b; cout<<p->speed()<<"\n";
    p=&t; cout<<p->speed()<<"\n";
}