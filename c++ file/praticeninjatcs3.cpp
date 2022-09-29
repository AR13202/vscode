#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(string si){
    string b = si;
    reverse(b.begin(),b.end());
    return (si==b);
}
int is_palim(string s,int n,int b){
    int a=0;
    for(int i=0;i<n;i++){
        string d = s.substr(i,i+b-1);
        if(is_palindrome(d)){
            a++;
        }
    }
    return a;
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a;
    cin >> a;
    int sum = 0;
    for(int i=0;i<a;i++){
        int b;
        cin >> b;
        int q = is_palim(s,n,b);
        sum += q;
    }
    cout << sum << endl;
    return 0;
}