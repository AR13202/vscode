#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int arr[4]={78,57,89,90};
    cout << s << endl;
    int av=0;
    for(int i=0;i<4;i++){
        av+=arr[i];
    }
    cout << av/4; 
}