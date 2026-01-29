#include <bits/stdc++.h>
using namespace std;

class Ticket{
    int seat;
public:
    Ticket(int s):seat(s){}
    int getSeat(){return seat;}
    virtual string ticketBenefits(){return "";}
    virtual ~Ticket(){}
};

class StandardTicket:public Ticket{
public:
    StandardTicket(int s):Ticket(s){}
    string ticketBenefits(){return "Basic Access";}
};

class VIPSeat:public StandardTicket{
public:
    VIPSeat(int s):StandardTicket(s){}
    string ticketBenefits(){return "Lounge+Snacks";}
};

int main(){
    Ticket* t1=new StandardTicket(12);
    Ticket* t2=new VIPSeat(7);
    cout<<t1->ticketBenefits()<<endl;
    cout<<t2->ticketBenefits()<<endl;
}