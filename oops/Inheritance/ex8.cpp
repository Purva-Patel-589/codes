#include <bits/stdc++.h>
using namespace std;

class Product {
protected:
    string name;
    double price;
public:
    Product(string n, double p) {
        name = n;
        price = p;
    }
    virtual double discount() = 0;
    virtual void show() {
        cout << "Product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Discounted Price: " << discount() << endl;
    }
};

class Electronics : public Product {
public:
    Electronics(string n, double p) : Product(n, p) {}
    double discount() {
        return price * 0.90;
    }
};

class Clothing : public Product {
public:
    Clothing(string n, double p) : Product(n, p) {}
    double discount() {
        return price * 0.80;
    }
};

class Groceries : public Product {
public:
    Groceries(string n, double p) : Product(n, p) {}
    double discount() {
        return price * 0.95;
    }
};

int main() {
    Product* p;

    Electronics e("Laptop", 50000);
    Clothing c("T-Shirt", 1200);
    Groceries g("Rice Bag", 900);

    p = &e;
    p->show();

    cout << endl;

    p = &c;
    p->show();

    cout << endl;

    p = &g;
    p->show();

    return 0;
}