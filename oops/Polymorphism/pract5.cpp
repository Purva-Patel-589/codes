#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    void start() {  //use virtual after this
        cout << "Starting a generic vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starts with a key." << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike starts with a kick or button." << endl;
    }
};

int main() {
    Car c;
    Bike b;

    cout << "Using objects directly:\n";
    c.start();
    b.start();

    cout << "\nUsing base class pointer:\n";
    Vehicle* v;

    v = &c;
    v->start();  

    v = &b;
    v->start();  

    return 0;
}