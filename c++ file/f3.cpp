#include<iostream>
using namespace std;
int main(){
    int *y=NULL; 
    int x=4;
    int a[5];
    cout << &x;
    y=a;
}
//always asign pointer variable to null otherwise it will point to unwanted position