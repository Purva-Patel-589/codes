#include <iostream>
using namespace std;
void fun(int a = 1000) {
    cout << a << endl;
}
int main() { 	
  	fun();
  	fun(221); 
    return 0;
}