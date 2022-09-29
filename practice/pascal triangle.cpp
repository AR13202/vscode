#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n = 5;
    vector<vector<int>> m;        
    vector<int> a;
    for(int i=1;i<=n;i++){
        vector<int> s;
        s.push_back(1);
        cout << 1 << " ";
        int k=0;
        if(a.size()>=2){
            for(int j=1;j<=a.size()-1;j++){
                s.push_back(a[k]+a[k+1]);
                cout << a[k]+a[k+1] << " ";
                k++;
            }
        }
        if(i>1){
            s.push_back(1);
            cout << 1 << " ";
        }
        cout << endl;
        a=s;
        m.push_back(s);
    }
    cout << m.size();
}