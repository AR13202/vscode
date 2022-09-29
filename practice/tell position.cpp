#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,string>> v;
    for(int i=0;i<n;i++){
        pair<int,string> p;
        string s;
        cin >> s;
        int a,b,c;
        cin >> a >> b >> c;
        int z = a+b+c;
        p.first = z;
        p.second = s;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    int j=1;
    for(int i= n-1;i<=n;i--){
        cout << v[i].first << " " << v[i].second << endl;
    }
    
	return 0;
}