#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle Constructor Called\n";
    }
    ~Vehicle() {
        cout << "Vehicle Destructor Called\n";
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Car Constructor Called\n";
    }
    ~Car() {
        cout << "Car Destructor Called\n";
    }
};

class ElectricCar : public Car {
public:
    ElectricCar() {
        cout << "ElectricCar Constructor Called\n";
    }
    ~ElectricCar() {
        cout << "ElectricCar Destructor Called\n";
    }
};

int main() {
    ElectricCar e;  
    return 0;
}