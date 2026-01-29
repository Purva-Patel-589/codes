#include <bits/stdc++.h>
using namespace std;

class Person{
    string name; int age;
public:
    void set(string n,int a){name=n;age=a;}
    string getName(){return name;}
    int getAge(){return age;}
    virtual void showRole(){cout<<"Person\n";}
};

class Doctor:public Person{
public:
    void showRole(){cout<<"Doctor\n";}
};

class Surgeon:public Doctor{
public:
    void showRole(){cout<<"Surgeon\n";}
};

int main(){
    Person *p;
    Person x; x.set("A",30);
    Doctor d; d.set("B",40);
    Surgeon s; s.set("C",50);
    p=&x; p->showRole();
    p=&d; p->showRole();
    p=&s; p->showRole();
}