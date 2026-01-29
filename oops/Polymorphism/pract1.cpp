#include <bits/stdc++.h>
using namespace std;

class DigiLib {
protected:
    string title;
    bool issued;
public:
    DigiLib(string t = "") : title(t), issued(false) {}
    virtual void addItem() = 0;
    virtual void issueItem() = 0;
    virtual void depositItem() = 0;
    virtual void display() const = 0;
    virtual ~DigiLib() {}
};

class Book : public DigiLib {
public:
    Book(string t = "") : DigiLib(t) {}
    void addItem() override {
        cout << "\nEnter Book Title: ";
        getline(cin, title);
        issued = false;
        cout << "Book added successfully!\n";
    }
    void issueItem() override {
        if (!issued) {
            issued = true;
            cout << "Book \"" << title << "\" issued successfully!\n";
        } else cout << "Book \"" << title << "\" is already issued!\n";
    }
    void depositItem() override {
        if (issued) {
            issued = false;
            cout << "Book \"" << title << "\" deposited successfully!\n";
        } else cout << "Book \"" << title << "\" was not issued.\n";
    }
    void display() const override {
        cout << "\n[Book]"
             << "\nTitle: " << title
             << "\nStatus: " << (issued ? "Issued" : "Available") << endl;
    }
};

class Tape : public DigiLib {
public:
    Tape(string t = "") : DigiLib(t) {}
    void addItem() override {
        cout << "\nEnter Tape Title: ";
        getline(cin, title);
        issued = false;
        cout << "Tape added successfully!\n";
    }
    void issueItem() override {
        if (!issued) {
            issued = true;
            cout << "Tape \"" << title << "\" issued successfully!\n";
        } else cout << "Tape \"" << title << "\" is already issued!\n";
    }
    void depositItem() override {
        if (issued) {
            issued = false;
            cout << "Tape \"" << title << "\" deposited successfully!\n";
        } else cout << "Tape \"" << title << "\" was not issued.\n";
    }
    void display() const override {
        cout << "\n[Tape]"
             << "\nTitle: " << title
             << "\nStatus: " << (issued ? "Issued" : "Available") << endl;
    }
};

int main() {
    DigiLib* library[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== DIGITAL LIBRARY MENU =====";
        cout << "\n1. Add Book";
        cout << "\n2. Add Tape";
        cout << "\n3. Issue Item";
        cout << "\n4. Deposit Item";
        cout << "\n5. Display All";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            if (count < 100) {
                library[count] = new Book();
                library[count]->addItem();
                count++;
            } else cout << "Library is full!\n";
        } 
        else if (choice == 2) {
            if (count < 100) {
                library[count] = new Tape();
                library[count]->addItem();
                count++;
            } else cout << "Library is full!\n";
        } 
        else if (choice == 3) {
            cout << "Enter index of item to issue (0-" << count - 1 << "): ";
            int i; cin >> i;
            if (i >= 0 && i < count) library[i]->issueItem();
            else cout << "Invalid index!\n";
        } 
        else if (choice == 4) {
            cout << "Enter index of item to deposit (0-" << count - 1 << "): ";
            int i; cin >> i;
            if (i >= 0 && i < count) library[i]->depositItem();
            else cout << "Invalid index!\n";
        } 
        else if (choice == 5) {
            cout << "\n===== LIBRARY CONTENT =====\n";
            for (int i = 0; i < count; i++) {
                cout << "\nIndex " << i << ":";
                library[i]->display();
            }
        } 
        else if (choice == 6) {
            cout << "Exiting program...\n";
        } 
        else {
            cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    for (int i = 0; i < count; i++) delete library[i];
    return 0;
}