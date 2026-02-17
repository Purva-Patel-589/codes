#include <bits/stdc++.h>
using namespace std;

class FixedDeposit {
private:
    double principal;
    double rate;
    double time;

public:
    void getInput() {
        cout << "Enter Principal Amount: ";
        cin >> principal;

        cout << "Enter Rate of Interest (in %): ";
        cin >> rate;

        cout << "Enter Duration (in years): ";
        cin >> time;
    }

    double SimpleInterest() {
        return (principal * rate * time) / 100;
    }

    double CompoundInterest() {
        double total = principal * pow((1 + rate / 100), time);
        return total - principal;
    }

    void display() {
        double si = SimpleInterest();
        double ci = CompoundInterest();

        cout << "\nSimple Interest Earned: " << si << endl;
        cout << "Total Amount with SI: " << principal + si << endl;

        cout << "\nCompound Interest Earned: " << ci << endl;
        cout << "Total Amount with CI: " << principal + ci << endl;
    }
};

int main() {
    FixedDeposit fd;
    fd.getInput();
    fd.display();
    return 0;
}