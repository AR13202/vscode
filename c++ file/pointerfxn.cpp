#include<iostream>
using namespace std;
void fact(int * z){
    int y=*z;
    int a=1;
    for(int i=1;i<=y;i++){
        a*=i;
    }
    cout << a << endl;
}

int main(){
    int a;
    cin >> a;
    fact(&a);
}