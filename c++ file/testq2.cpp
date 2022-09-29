#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int s=0,e=n-1;
        int p=1;
        while(s<=e){
            if(abs(a[s]-a[e])>2){
                p=0;
                break;
            }if(abs(a[s]-a[e])==1){
                p=0;
                break;
            }
            s++;
            e--;
        }
        if(p==1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}