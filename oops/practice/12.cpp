#include <bits/stdc++.h>
using namespace std;

class Policy{
    int num;
    double premium;
public:
    Policy(int n,double p):num(n),premium(p){}
    double getP(){return premium;}
    virtual double finalAmount(){return 0;}
    virtual ~Policy(){}
};

class LifeInsurance:public Policy{
public:
    LifeInsurance(int n,double p):Policy(n,p){}
    double finalAmount(){return getP()*1.2;}
};

class HealthInsurance:public Policy{
public:
    HealthInsurance(int n,double p):Policy(n,p){}
    double finalAmount(){return getP()*1.1;}
};

class VehicleInsurance:public Policy{
public:
    VehicleInsurance(int n,double p):Policy(n,p){}
    double finalAmount(){return getP()*1.3;}
};

int main(){
    Policy* a=new LifeInsurance(1,1000);
    Policy* b=new HealthInsurance(2,1000);
    Policy* c=new VehicleInsurance(3,1000);
    cout<<a->finalAmount()<<endl;
    cout<<b->finalAmount()<<endl;
    cout<<c->finalAmount()<<endl;
}