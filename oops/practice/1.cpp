#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name; int age;
    Person(string n,int a):name(n),age(a){}
    virtual void showDetails(){ cout<<name<<" "<<age<<"\n"; }
};

class Student:public Person{
public:
    int roll;
    Student(string n,int a,int r):Person(n,a),roll(r){}
    void showDetails(){ cout<<name<<" "<<age<<" "<<roll<<"\n"; }
};

class Teacher:public Person{
public:
    string dept;
    Teacher(string n,int a,string d):Person(n,a),dept(d){}
    void showDetails(){ cout<<name<<" "<<age<<" "<<dept<<"\n"; }
};

int main(){
    Person* p;
    Student s("A",20,101);
    Teacher t("B",40,"CSE");
    p=&s; p->showDetails();
    p=&t; p->showDetails();
}