#include<bits/stdc++.h>
using namespace std;

int calculate(int a, int b, char op) {
    switch(op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else {
                cout << "Error: Division by zero is not allowed!" << endl;
                return 0;
            }
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }
}

int main() {
    int num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    result = calculate(num1, num2, op);

    if (!(op == '/' && num2 == 0) && (op == '+' || op == '-' || op == '*' || op == '/')) {
        cout << "Result: " << result << endl;
    }

    return 0;
}