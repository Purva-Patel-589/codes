#include<bits/stdc++.h>
using namespace std;

class Movie {
    string name;
    float rating;
public:
    Movie(string n, float r) {
        name = n;
        rating = r;
    }
    void compareRating(Movie m) {
        if (rating > m.rating)
            cout << name << " is better than " << m.name << endl;
        else if (rating < m.rating)
            cout << m.name << " is better than " << name << endl;
        else
            cout << name << " and " << m.name << " have equal ratings" << endl;
    }
};

int main() {
    Movie m1("Inception", 8.8);
    Movie m2("Interstellar", 8.6);
    Movie m3("Tenet", 8.8);
    m1.compareRating(m2);
    m1.compareRating(m3);
    return 0;
}
