#include <bits/stdc++.h>
#include <vector> 
using namespace std;

int main() {
    // Write your code here
    string str;
    getline(cin,str);
    string t = "";
    vector<string> s;
    cout << str << endl;
    for(int i=0;i<str.length();i++){
        if(str[i]==' ' || i == str.length()-1){
            s.push_back(t);
            t="";
        }else {
            t+=str[i];
        }
    }
    vector<pair<string,int>> a;
    for(int i=0;i<s.size();i++){
    }
	/*
    if(a.size()==0){
        cout << -1 << endl;
    }else{
        for(int i=0;i<a.size();i++){
            cout << a[i].first << " " << a[i].second << endl;
        }
    }
    */
   return 0;
}