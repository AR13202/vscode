#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Array Length: ";
    cin >> n;
    int arr[n];
    cout << "Array inputs: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    cout << "Non-repeated numbers are: ";
    for(auto it:m){
        if(it.second==1){
            cout << it.first << " ";
        }
    }
}