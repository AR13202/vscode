#include<bits/stdc++.h>
using namespace std;

string Second_Hands(int arr[],int n,int k){
    if(n>k*2){
        return "NO";
    }
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++; 
    }
    for(auto it:m){
        if((it.second)>2){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    int t;
    cin >>t;
    for(int p=1;p<=t;p++){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << "Case #"<<p<<": "
            <<Second_Hands(arr,n,k)<<endl;            
    }
}