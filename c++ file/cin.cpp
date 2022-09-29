#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[50]="hello";
    //cin.get(a,10);//declaring a of bigger size but on input stores value of size 10 in a; 
    cout << a;
    string s="hello";
    char c[50]="ascsd";
    cout << s.length();
    strcat(a,c);
    cout << endl << a;
    cout << endl << strlen(a);
    s.push_back('a');
    s.push_back('q');
    cout << endl << s;
    s.resize(6);
    cout << endl << s;
    s.pop_back();
    cout << endl << s;
}