#include <bits/stdc++.h>
using namespace std;

class Animal{
    string speciesName;
public:
    void set(string s){speciesName=s;}
    string get(){return speciesName;}
    virtual void sound()=0;
};

class Dog:public Animal{
public:
    void sound(){cout<<"Bark\n";}
};

class Cat:public Animal{
public:
    void sound(){cout<<"Meow\n";}
};

class Lion:public Animal{
public:
    void sound(){cout<<"Roar\n";}
};

int main(){
    Animal* a[3];
    Dog d; d.set("Dog");
    Cat c; c.set("Cat");
    Lion l; l.set("Lion");
    a[0]=&d; a[1]=&c; a[2]=&l;
    for(int i=0;i<3;i++) a[i]->sound();
}