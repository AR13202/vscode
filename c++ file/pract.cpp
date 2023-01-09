#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int c=0;
    map<int,vector<int>> m;
    for(int i=0;i<n;i++){
        if(m.find(arr[i])==m.end()){
            m[arr[i]] = {i};
        }else{
            m[arr[i]].push_back(i);
        }
    }
    for(auto x: m){
        for(int i=0;i<x.second.size()-k;i++){
            int a = i+1;
            while(x.second[a]-x.second[i]<k){
                a++;
            }
            c+=x.second.size()-a;
        }
    }
    cout << c << endl;
}
/*
0 1 2 3 4
1 2 2 1 2 
1 - 0 3
    0 1
    0 1 2
2 - 1 2 4
*/