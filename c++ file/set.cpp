#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    int n;
    set<int> s;
    s.insert(20);
    s.insert(10);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();++it){
        cout << *it << " ";
    }
    cout << "\n";
    set<int> s2(s.begin(),s.end());
    s2.insert(70);
    s2.insert(60);
    s2.insert(80);
    cout << *(s2.begin(),s2.find(70)) << endl;
    set<int>::iterator it2;
    for(it2=s2.begin();it2!=s2.end();++it2){
        cout << *it2 << " ";
    }
    cout << "\n";
    s2.erase(50);
    s2.erase(s2.begin(),s2.find(30));
    set<int>::iterator it3;
    for(it3=s2.begin();it3!=s2.end();++it3){
        cout << *it3 << " ";
    }
    cout << "\n";
    set<int>::iterator it4;
    for(it4=s.begin();it4!=s.end();++it4){
        cout << *it4 << " ";
    }
    cout << "\n";
    return 0;
}