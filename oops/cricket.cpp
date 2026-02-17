#include<bits/stdc++.h>
using namespace std;

class Cricket {
public:
    void score(int runs) {
        cout << "Runs scored: " << runs << endl;
    }

    void score(int runs, int sixes) {
        cout << "Runs scored: " << runs << ", Sixes: " << sixes << endl;
    }

    void score(int runs, int balls, float strikeRate) {
        cout << "Runs scored: " << runs << ", Balls faced: " << balls << ", Strike Rate: " << strikeRate << endl;
    }
};

int main() {
    Cricket c;
    c.score(75);
    c.score(90, 6);
    c.score(120, 80, 150.0);
    return 0;
}
