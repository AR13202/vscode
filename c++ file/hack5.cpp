#include<bits/stdc++.h>
using namespace std;

bool checkarr(vector<int> arr1,vector<int>arr2){
    for(int i=0;i<arr1.size();i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}

bool rotatearr(vector<int>arr1,vector<int>arr2,long long int k,long long int n){
    if(k==0){
        return checkarr(arr1,arr2);
    }
    bool b = checkarr(arr1,arr2);
    if(b){
        return true;
    }
    int a = arr2[0];
    int p=0;
    for(int i=0;i<n;i++){
        if(arr1[i]==a){
            p=i;
            break;
        }
    }
    for(int i=0;i<p;i++){
        int m = arr1[0];
        arr1.erase(arr1.begin());
        arr1.push_back(m);
    }
    return checkarr(arr1,arr2);
}

int main(){
    ifstream in;
    ofstream out;
    in.open("input1.txt");
    out.open("output1.txt");
    int t;
    in >> t;
    for(int i=1;i<=t;i++){
        long long int n,k;
        in >> n >> k;
        vector<int> arr;
        vector<int> arr2;
        for(int i=0;i<n;i++){
            int a;
            in>>a;
            arr.push_back(a);
        }
        for(int i=0;i<n;i++){
            int a;
            in>>a;
            arr2.push_back(a);
        }
        string x="";
        if(rotatearr(arr,arr2,k,n)){
            x="YES";
        }else{
            x="NO";
        }
        out << "Case #"<<i<<": "<<x<<endl;
    }
}