#include<bits/stdc++.h>
using namespace std;
int sane(string a,string b,int n,int m){
    int count = 0;
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]!=b[j]){
            j++;
            count++;
        }else{
            i++;
            j++;
        }
    }
    if(i<n){
        return 0;
    }
    if(j<m){
        count += m-j;
    }
    return count;
}
bool same(string a,string b, int n,int m){
    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    for(int e=1;e<=t;e++){
        string i,p;
        cin >> i >> p;
        int n = i.length();
        int m = p.length();
        if(n==m){
            bool a = same(i,p,n,m);
            if(a==false){
                cout << "Case #" << e <<
                ": IMPOSSIBLE" << endl;
            }else{
                cout << "Case #" << e <<
                ": " << 0 << endl;
            }
        }else{
            int a = sane(i,p,n,m);
            if(a==0){
                cout << "Case #" << e <<
                ": IMPOSSIBLE" << endl;
            }else{
                cout << "Case #" << e <<
                ": " << a << endl;
            }
        }
    }
}