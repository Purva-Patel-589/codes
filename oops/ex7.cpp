#include <bits/stdc++.h>
using namespace std;

class Book {
protected:
    string title, author;
public:
    Book(string t, string a) {
        title = t;
        author = a;
    }
    virtual void displayDetails() = 0;
};

class EBook : public Book {
    double fileSize;
public:
    EBook(string t, string a, double size) : Book(t, a) {
        fileSize = size;
    }
    void displayDetails() {
        double cost = fileSize * 2;
        cout << "E-Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "File Size: " << fileSize << " MB" << endl;
        cout << "Cost: " << cost << endl;
    }
};

class AudioBook : public Book {
    double duration;
public:
    AudioBook(string t, string a, double d) : Book(t, a) {
        duration = d;
    }
    void displayDetails() {
        double cost = duration * 3;
        cout << "Audio Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Duration: " << duration << " hrs" << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main() {
    Book* b;

    EBook eb("Learn C++", "Bjarne Stroustrup", 5.5);
    AudioBook ab("OOP Concepts", "James Gosling", 2.4);

    b = &eb;
    b->displayDetails();

    cout << endl;

    b = &ab;
    b->displayDetails();

    return 0;
}