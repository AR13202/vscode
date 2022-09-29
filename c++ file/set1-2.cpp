#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> m;
    vector<int> n;
    vector<int> key;
    vector<int> value;
    for(int i=0;i<10;i++){
        int a;
        cin >>a;
        n.push_back(a);
    }
    for(int i=0;i<n.size();i++){
        m[n[i]]++;
    }
    for(auto it:m){
        key.push_back(it.first);
        value.push_back(it.second);
    }
    for(int i=0;i<value.size();i++){
        for(int j=i+1;j<value.size();j++){
            if(value[j]<value[i]){
                int temp = value[i];
                value[i] = value[j];
                value[j] = temp;
                int temp2 = key[i];
                key[i] = key[j];
                key[j] = temp2;
            }else if (value[i]==value[j]){
                if(key[j]<key[i]){
                    int temp2 = key[i];
                    key[i] = key[j];
                    key[j] = temp2;
                }
            }
        }
    }
    for(int i=0;i<value.size();i++){
        cout << key[i] << " "<<value[i] << endl;
    }
}