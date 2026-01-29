#include <bits/stdc++.h>
using namespace std;

class Employee{
    int id; double sal;
public:
    void set(int i,double s){id=i;sal=s;}
    int getId(){return id;}
    double getSal(){return sal;}
    virtual double calculateBonus(){return sal*0.05;}
};

class TeachingStaff:public Employee{
public:
    double calculateBonus(){return getSal()*0.1;}
};

class Professor:public TeachingStaff{
public:
    double calculateBonus(){return getSal()*0.2;}
};

int main(){
    Employee *p;
    Employee e; e.set(1,10000);
    TeachingStaff t; t.set(2,20000);
    Professor f; f.set(3,30000);
    p=&e; cout<<p->calculateBonus()<<"\n";
    p=&t; cout<<p->calculateBonus()<<"\n";
    p=&f; cout<<p->calculateBonus()<<"\n";
}