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
    cout << "Repeated numbers are: \n";
    for(auto it:m){
        if(it.second>1){
            cout << "repeated number: " <<it.first 
            << " frequency: " << it.second<<endl;
        }
    }
}