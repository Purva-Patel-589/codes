#include<bits/stdc++.h>
using namespace std;

double area(double radius) {
    return M_PI * radius * radius;
}

double area(double length, double breadth) {
    return length * breadth;
}

double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    double r, l, b, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle = " << area(r) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of Rectangle = " << area(l, b) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of Triangle = " << area(b, h, true) << endl;

    return 0;
}