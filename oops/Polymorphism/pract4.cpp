#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square." << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle." << endl;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Circle();
    shapes[1] = new Square();
    shapes[2] = new Triangle();

    cout << "Demonstrating Runtime Polymorphism:\n";
    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();
    }

    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}