#include <bits/stdc++.h>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    void setValues(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    Book book1, book2;

    book1.setValues("The Great Gatsby", "F. Scott Fitzgerald", 499.50);

    book2.setValues("1984", "George Orwell", 350.00);

    cout << "Book 1 Details:" << endl;
    book1.display();

    cout << "Book 2 Details:" << endl;
    book2.display();

    return 0;
}