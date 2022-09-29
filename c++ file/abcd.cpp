#include<iostream>
using namespace std;
int main(){
    char a[6] = {'w','e','t','y','r','\0'};//'\0' means null/terminate
    char *ptr;
    ptr = a;
    cout << ptr;
}