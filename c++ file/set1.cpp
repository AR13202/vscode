#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s={1,2,3,4,5,6};
    int x=4;
    try{
        if(s.find(x)!=s.end()){
            throw x;
            cout << "try blocks\n";
        }else{
            s.insert(x);
            cout << "element inserted\n";
        }
    }
    catch(...){
        cout << "element present\n";
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();++it){
        cout << *it << " ";
    }
    return 0;
}