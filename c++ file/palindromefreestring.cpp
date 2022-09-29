#include<vector>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int check(string s, int n){
    string s1 = s;
    reverse(s1.begin(),s1.end());
    return (s == s1); 
}
void cases(string s,int n){

}
int divide(string s,int n){
    vector<string> arr;
    for(int i=0;i<n;i++){
        if((n-i)>=5){
            string a = s.substr(i,i+5);
            arr.push_back(a);
        }
    }
    for(int i=0;i<arr.size();i++){
        cases(arr[i],arr[i].length());
    }
}
int find(string s,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='?'){
            count++;
        }
    }
    return count;
}
void palin(string s,string s1,int n){
    for(int i=0;i<n;i++){
            
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = s;
        reverse(s1.begin(),s1.end());
        int a = find(s,n);
        divide(s,n);
    }
}