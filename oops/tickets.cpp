#include<bits/stdc++.h>
using namespace std;

class Ticket {
    string destination;
    float fare;
public:
    Ticket(string d, float f) {
        destination = d;
        fare = f;
        cout << "Ticket booked to " << destination << " with fare " << fare << endl;
    }
    ~Ticket() {
        cout << "Ticket to " << destination << " cancelled" << endl;
    }
};

int main() {
    Ticket t1("Delhi", 1200);
    Ticket t2("Mumbai", 1500);
    Ticket t3("Chennai", 2000);
    return 0;
}