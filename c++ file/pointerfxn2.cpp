#include<iostream>
using namespace std;
pair<int,int> sw(int *z,int*y){
    int temp = *z;
    *z = *y;
    *y = temp;
    pair<int,int> a;
    a.first=*z;
    a.second=*y;
    return a;
}
int main(){
    int a,b;
    cin >> a >> b;
    pair<int,int> q = sw(&a,&b);
    cout <<q.first << " " << q.second;
}