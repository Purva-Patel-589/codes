#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1;
    cout<<"enter the first string : ";
    getline(cin,str1);
    string str2;
    cout<<"enter the second string : ";
    getline(cin,str2);
    int i=0,k=0;
    while(i<str1.length() && i<str2.length()){
        if(str1[i]>str2[i]){
            k=1;
            break;
        }
        else if(str1[i]<str2[i]){
            k=-1;
            break;
        }
        else i++;
    }
    if(k==1)
        cout<<"string 1 is greater than string 2";
    else if(k==-1)
        cout<<"string 2 is greater than string 1";
    else{
        if(str1.length()>str2.length())
            cout<<"string 1 is greater ";
        else if(str1.length()<str2.length())
            cout<<"string 2 is greater ";
        else 
            cout<<"both string is equal !";
    }
    return 0;
}