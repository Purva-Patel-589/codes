#include <bits/stdc++.h>
using namespace std;

class Base {
public: int pubVar=10;
protected: int protVar=20;
private: int privVar=30;
};

class DP: public Base {
public: void show(){ cout<<"Public: "<<pubVar<<" "<<protVar<<"\n"; }
};

class DPr: private Base {
public: void show(){ cout<<"Private: "<<pubVar<<" "<<protVar<<"\n"; }
};

class DPt: protected Base {
public: void show(){ cout<<"Protected: "<<pubVar<<" "<<protVar<<"\n"; }
};

int main() {
    DP a; a.show();
    DPr b; b.show();
    DPt c; c.show();
}