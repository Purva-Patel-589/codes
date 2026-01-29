#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1;
    cout << "enter the first string : ";
    getline(cin, str1);          

    string str2;
    cout << "enter the second string : ";
    getline(cin, str2);       

    str1 = str1 + str2;        
    cout << "combined string is : ";
    cout << str1;                

    return 0;
}