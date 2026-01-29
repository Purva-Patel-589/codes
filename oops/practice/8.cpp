#include <bits/stdc++.h>
using namespace std;

class Book{
    string title;
public:
    void set(string t){title=t;}
    string get(){return title;}
    virtual int fine(int d){return d*1;}
};

class PrintedBook:public Book{
public:
    int fine(int d){return d*2;}
};

class Novel:public PrintedBook{
public:
    int fine(int d){return d*3;}
};

int main(){
    Book* p;
    Book b; b.set("A");
    PrintedBook pb; pb.set("B");
    Novel n; n.set("C");
    p=&b; cout<<p->fine(5)<<"\n";
    p=&pb; cout<<p->fine(5)<<"\n";
    p=&n; cout<<p->fine(5)<<"\n";
}