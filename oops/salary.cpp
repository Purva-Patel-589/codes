#include<bits/stdc++.h>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    double salary;
    int experience;

public:
    Employee(int id, string n, double s, int exp) {
        empId = id;
        name = n;
        salary = s;
        experience = exp;
    }

    void incrementSalary() {
        if (experience >= 10) {
            salary += salary * 0.20;
        } else if (experience >= 5) {
            salary += salary * 0.10;
        } else if (experience >= 2) {
            salary += salary * 0.05;
        } else {
            cout << "No increment for less than 2 years of experience." << endl;
        }
    }

    void displaySalarySlip() {
        cout << "-----------------------------" << endl;
        cout << "        Salary Slip          " << endl;
        cout << "-----------------------------" << endl;
        cout << "Employee ID   : " << empId << endl;
        cout << "Name          : " << name << endl;
        cout << "Experience    : " << experience << " years" << endl;
        cout << "Current Salary: " << salary << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Employee e1(101, "Rahul Sharma", 50000, 6);

    cout << "Before Increment:" << endl;
    e1.displaySalarySlip();

    e1.incrementSalary(); 

    cout << "\nAfter Increment:" << endl;
    e1.displaySalarySlip();

    return 0;
}