#include <bits/stdc++.h>
using namespace std;

class Parcel{
    double w;
public:
    Parcel(double x):w(x){}
    double getW(){return w;}
    virtual double deliveryCharge(){return 0;}
    virtual ~Parcel(){}
};

class LocalParcel:public Parcel{
public: LocalParcel(double x):Parcel(x){}
double deliveryCharge(){return getW()*5;}
};

class NationalParcel:public Parcel{
public: NationalParcel(double x):Parcel(x){}
double deliveryCharge(){return getW()*10;}
};

class InternationalParcel:public Parcel{
public: InternationalParcel(double x):Parcel(x){}
double deliveryCharge(){return getW()*20;}
};

int main(){
    Parcel* p1=new LocalParcel(2);
    Parcel* p2=new NationalParcel(3);
    Parcel* p3=new InternationalParcel(1.5);
    cout<<p1->deliveryCharge()<<endl;
    cout<<p2->deliveryCharge()<<endl;
    cout<<p3->deliveryCharge()<<endl;
}