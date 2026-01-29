#include <bits/stdc++.h>
using namespace std;

class Book {
public:
    string title, author;
    Book(string t, string a) : title(t), author(a) {}
    virtual void displayDetails() = 0;
};

class EBook : public Book {
public:
    EBook(string t, string a) : Book(t,a) {}
    void displayDetails() {
        cout << title << " by " << author << " (EBook) Cost: 100\n";
    }
};

class AudioBook : public Book {
public:
    AudioBook(string t, string a) : Book(t,a) {}
    void displayDetails() {
        cout << title << " by " << author << " (AudioBook) Cost: 150\n";
    }
};

int main() {
    Book* b;
    EBook e("ABC","XYZ");
    AudioBook a("PQR","LMN");
    b = &e; b->displayDetails();
    b = &a; b->displayDetails();
}