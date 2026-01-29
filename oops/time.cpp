#include<bits/stdc++.h>
using namespace std;

class Clock {
private:
    int hours;
    int minutes;

public:
    Clock() {
        hours = 0;
        minutes = 0;
    }

    void setTime(int h, int m) {
        hours = h;
        minutes = m;
    }

    void display() {
        if (hours < 10) cout << "0";
        cout << hours << ":";
        if (minutes < 10) cout << "0";
        cout << minutes << endl;
    }
};

int main() {
    Clock c1, c2;
    cout << "Default Clock: ";
    c1.display();
    c2.setTime(9, 45);
    cout << "Updated Clock: ";
    c2.display();
    return 0;
}