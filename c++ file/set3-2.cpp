#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v;
    int n;
    int sum;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==sum){
                pair<int,int> p;
                p.first = arr[i];
                p.second = arr[j];
                v.push_back(p);
            }
        }
    }
    if(v.size()==0){
        cout << "Pair not found";
    }else{
        for(int i=0;i<v.size();i++){
            cout << "Pair Found : (" << v[i].first <<
            ","<<v[i].second << ")\n";
        }
    }
}