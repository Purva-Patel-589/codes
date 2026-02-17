#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animals make sounds." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    cout << "Using objects directly:\n";
    d.sound();
    c.sound();

    cout << "\nUsing base class pointer:\n";
    Animal* a;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}