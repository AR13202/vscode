#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    if(n<=5000){
        cout << "total salary: " << n+((2.0*n)/100.0)+((3.0*n)/100.0);
    }else if(n<=10000){
        cout << "total salary: " << n+((3.0*n)/100.0)+((3.5*n)/100.0);
    }else if(n<=15000){
        cout << "total salary: " << n+((3.5*n)/100.0)+((4*n)/100.0);
    }else{
        cout << "total salary: " << n+((5.0*n)/100.0)+((5*n)/100.0);
    }
}