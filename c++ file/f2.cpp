#include<iostream>
//scope resolution operator to access global variable
using namespace std;
int a=2;
int main(){
    int a=6;
    cout << a << endl;
    cout << ::a;
}