#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animals make sounds." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
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