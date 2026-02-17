#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void area(int side) {
        cout << "Area of square: " << side * side << endl;
    }

    virtual void area(int length, int breadth) {
        cout << "Area of rectangle: " << length * breadth << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void area(int radius) override {
        cout << "Area of circle: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
public:
    void area(int length, int breadth) override {
        cout << "Area of rectangle (from derived): " << length * breadth << endl;
    }
};

int main() {
    Shape* s;  
    Circle c;
    Rectangle r;

    cout << "=== Using base class object (overloading) ===\n";
    Shape base;
    base.area(5);        
    base.area(5, 10);    

    cout << "\n=== Using base pointer for runtime polymorphism ===\n";

    s = &c;
    s->area(7);  

    s = &r;
    s->area(4, 8);  

    return 0;
}