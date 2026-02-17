#include <bits/stdc++.h>
using namespace std;

class Device{
    int id;
public:
    void set(int x){id=x;}
    int get(){return id;}
    virtual void performAction(){cout<<"Device\n";}
};

class Light:public Device{
public:
    void performAction(){cout<<"Light On\n";}
};

class Fan:public Device{
public:
    void performAction(){cout<<"Fan Running\n";}
};

class AirConditioner:public Device{
public:
    void performAction(){cout<<"AC Cooling\n";}
};

int main(){
    Device* p;
    Light l; l.set(1);
    Fan f; f.set(2);
    AirConditioner a; a.set(3);
    p=&l; p->performAction();
    p=&f; p->performAction();
    p=&a; p->performAction();
}