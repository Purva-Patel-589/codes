#include <bits/stdc++.h>
using namespace std;

class Employee {
protected:
    int id;
    string name;

public:
    Employee(int id, string name) {
        this->id = id;
        this->name = name;
    }

    void displayBasicInfo() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class FullTimeEmployee : public Employee {
    float monthlySalary;

public:
    FullTimeEmployee(int id, string name, float salary)
        : Employee(id, name) {
        monthlySalary = salary;
    }

    void displaySalary() {
        cout << "\n--- Full Time Employee ---\n";
        displayBasicInfo();
        cout << "Monthly Salary: " << monthlySalary << endl;
    }
};

class PartTimeEmployee : public Employee {
    float hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(int id, string name, float rate, int hours)
        : Employee(id, name) {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    void displaySalary() {
        cout << "\n--- Part Time Employee ---\n";
        displayBasicInfo();
        cout << "Hourly Rate: " << hourlyRate << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Total Salary: " << hourlyRate * hoursWorked << endl;
    }
};

int main() {
    FullTimeEmployee f1(101, "Amit Sharma", 45000);
    PartTimeEmployee p1(102, "Riya Verma", 300, 40);

    f1.displaySalary();
    p1.displaySalary();

    return 0;
}