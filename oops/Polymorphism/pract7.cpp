#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
    virtual void showDetails() {
        cout << "Employee details\n";
    }

    int calcSalary(int basic) {
        return basic;
    }

    int calcSalary(int basic, int bonus) {
        return basic + bonus;
    }

    virtual ~Employee() {}
};

class Developer : public Employee {
public:
    void showDetails() override {
        cout << "Developer details\n";
    }
};

class Manager : public Employee {
public:
    void showDetails() override {
        cout << "Manager details\n";
    }
};

int main() {
    Employee* e;
    Developer d;
    Manager m;

    e = &d;
    e->showDetails();

    e = &m;
    e->showDetails();

    Employee emp;
    cout << "Salary (basic): " << emp.calcSalary(30000) << endl;
    cout << "Salary (basic + bonus): " << emp.calcSalary(30000, 5000) << endl;

    return 0;
}