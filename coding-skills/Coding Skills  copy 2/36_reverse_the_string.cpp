#include <iostream>
#include <string>
using namespace std;
// sqrt n complexity
int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);  
    int n = str.length();
    int i = 0;
    while (i < n / 2) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
        i++;
    }
    cout << "The reverse of the given string: " << str<<endl;
    return 0;
}