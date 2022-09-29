#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<string> a;
    a.push_back("00:00");
    a.push_back("23:59");
    a.push_back("00:01");
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;
}