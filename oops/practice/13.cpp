#include <bits/stdc++.h>
using namespace std;

class Exercise{
    double duration;
public:
    Exercise(double d):duration(d){}
    virtual double caloriesBurned(){return 0;}
    double getD(){return duration;}
    virtual ~Exercise(){}
};

class Cardio:public Exercise{
public:
    Cardio(double d):Exercise(d){}
    double caloriesBurned() override {return getD()*8;}
};

class Running:public Cardio{
public:
    Running(double d):Cardio(d){}
    double caloriesBurned() override {return getD()*12;}
};

int main(){
    Exercise* e1=new Cardio(30);
    Exercise* e2=new Running(30);
    cout<<e1->caloriesBurned()<<endl;
    cout<<e2->caloriesBurned()<<endl;
}