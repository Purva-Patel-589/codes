#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string firstName;
    string lastName;
    int age;

public:    
    Student() {
        firstName = "";
        lastName = "";
        age = 0;
    }

    Student(string fName, string lName, int a) {
        firstName = fName;
        lastName = lName;
        age = a;
    }

    void displayDetails() {
        cout << "------------------------------" << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    Student s1("Purva", "Patel", 20);

    Student s2;

    cout << "Student 1 (Overloaded Constructor):" << endl;
    s1.displayDetails();

    cout << "Student 2 (Default Constructor):" << endl;
    s2.displayDetails();

    return 0;
}