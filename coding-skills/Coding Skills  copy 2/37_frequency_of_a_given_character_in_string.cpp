#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to find frequency: ";
    cin >> ch;

    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }

    cout << "Frequency of '" << ch << "' = " << count << endl;

    return 0;
}
