#include <iostream>
using namespace std;
//represented by (?:)
/*
{condn.} true:false;
(a>b)?cout<<"hi":cout<<"hello";
*/
int main(){
    int a = 5,b=3;
    (a<b)?cout<<"hi":cout<<"hello";
}
