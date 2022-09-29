#include<bits/stdc++.h>
using namespace std;
int priority(char a){
    if(a=='+' || a=='-'){
        return 1;
    }else if(a=='*'||a=='/'||a=='%'){
        return 2;
    }else if(a=='^'){
        return 3;
    }
    return 0;
}
string infixtopostfix(string a){
    string w="";
    stack<char>s;
    for(int i=0;i<a.length();i++){
        char b = a[i];
        cout << "1\n";
        if(s.size()==0){
            if((b>='A' && b<='Z') || (b>='a' && b<='z')){
                w+=b;
            }else {
                s.push(b);
            }
        }else{
            if((b>='A' && b<='Z') || (b>='a' && b<='z')){
                w+=b;
            }else if(b==')'){
                while(s.top()!='('){
                    w+=s.top();
                    s.pop();
                }
            }else if(priority(b)<=priority(s.top())){
                while(priority(b)<=priority(s.top()) || !s.empty()){
                    w+=s.top();
                    s.pop();
                }
            }else if(priority(b)>priority(s.top())){
                s.push(b);
            }
        }
    }
    cout<<w<<endl;
    while(!s.empty()){
        w+=s.top();
        s.pop();
    }
    return w;
}
int main(){
    string a = "A+B*C+D";
    cout << infixtopostfix(a) << endl;
}