#include<iostream>
using namespace std;
int main(){
    int a=8;
    int *ptr=&a;
    int **ptr1;
    ptr1=&ptr;
    cout << a<< endl; //8
    cout << *ptr << endl; // 8
    cout << ptr << endl;  // address of 8
    cout << ptr1 << endl; // address of ptr
    cout << *ptr1 << endl; // addreess of 8
    cout << **ptr1 << endl; // 8
}