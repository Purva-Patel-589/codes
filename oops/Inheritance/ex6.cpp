#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
};

class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 8);

    cout << "Circle Area: " << c.area() << endl;
    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Triangle Area: " << t.area() << endl;

    return 0;
}