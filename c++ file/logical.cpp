#include <iostream>
using namespace std;
int main(){
    int a=5,b=6;
    int c = a&&b;
    cout << c << endl; // returns true any constant unless one of the value is zero
    cout << a||b;
    return 0;
}