#include <bits/stdc++.h>
#include <string>
using namespace std;
void canConstruct(string r, string m) {
    for(int i=0;i<r.length();i++){
        for(int j=0;j<m.length();j++){
            if(r[i]==m[j]){
                cout << m[j] << " ";
                m = m.substr(0,j)+m.substr(j+1,m.length());
                break;
            }
        }
    }
}
int main(){
    string a = "aab";
    string b = "baa";
    canConstruct(a,b);
    return 0;
}