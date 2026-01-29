#include <bits/stdc++.h>
using namespace std;

class Teacher {
protected:
    int teachingHours;
public:
    Teacher(int hours) { 
        teachingHours = hours;
    }
};

class Researcher {
protected:
    int researchPapers;
public:
    Researcher(int papers) {
        researchPapers = papers;
    }
};

class Professor : public Teacher, public Researcher {
public:
    Professor(int hours, int papers) : Teacher(hours), Researcher(papers) {}

    void display() {
        cout << "Teaching Hours: " << teachingHours << endl;
        cout << "Research Papers: " << researchPapers << endl;
        int score = teachingHours * 2 + researchPapers * 5;
        cout << "Academic Performance Score: " << score << endl;
    }
};

int main() {
    Professor p(120, 8);
    p.display();
    return 0;
}