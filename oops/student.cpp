#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int marks;

public:
    void setName(string n) {
        name = n;
    }
    void setRollNumber(int r) {
        rollNumber = r;
    }
    void setMarks(int m) {
        if (m >= 0 && m <= 100)
            marks = m;
        else
            marks = 0;
    }
    string getName() {
        return name;
    }
    int getRollNumber() {
        return rollNumber;
    }
    int getMarks() {
        return marks;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setName("Purva");
    s.setRollNumber(101);
    s.setMarks(95);
    s.display();
    return 0;
}