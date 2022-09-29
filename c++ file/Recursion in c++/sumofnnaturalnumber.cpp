#include<iostream>
using namespace std;
int nat(int n){
    if(n<=1){
        return 1;
    }
    return n+nat(n-1);
}
int main(){
    int n;
    cin>>n;
    cout << nat(n) << endl;
}