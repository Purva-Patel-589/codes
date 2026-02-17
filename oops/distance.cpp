#include<bits/stdc++.h>
using namespace std;

class Distance {
    int feet;
    int inches;
public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }
    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
    static Distance addDistance(Distance d1, Distance d2) {
        int f = d1.feet + d2.feet;
        int i = d1.inches + d2.inches;
        return Distance(f, i);
    }
};

int main() {
    Distance d1(5, 8), d2(3, 10);
    Distance d3 = Distance::addDistance(d1, d2);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}