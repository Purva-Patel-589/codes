#include<bits/stdc++.h>
using namespace std;

class TempConvertor {
private:
    double celsius;

public:
    void setCelsius(double c) {
        if (c >= -273.15)
            celsius = c;
        else
            celsius = -273.15;
    }
    double getFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;
    }
};

int main() {
    TempConvertor t;
    t.setCelsius(25);
    cout << "Fahrenheit: " << t.getFahrenheit() << endl;
    return 0;
}