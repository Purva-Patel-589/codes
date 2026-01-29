#include <bits/stdc++.h>
using namespace std;

class Animal{
public:
    virtual void sound()=0;
};

class Mammal:public Animal{
public:
    void sound()=0;
};

class Dog:public Mammal{
public:
    void sound(){cout<<"Bark\n";}
};

class Cat:public Mammal{
public:
    void sound(){cout<<"Meow\n";}
};

class Human:public Mammal{
public:
    void sound(){cout<<"Hello\n";}
};

int main(){
    Animal* a[3];
    Dog d; Cat c; Human h;
    a[0]=&d; a[1]=&c; a[2]=&h;
    for(int i=0;i<3;i++) a[i]->sound();
}