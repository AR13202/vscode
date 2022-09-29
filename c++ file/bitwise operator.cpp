#include <iostream>
using namespace std;
int main(){
    //and
    int a{0b1010};
    int b{0b1111};
    int c=a&b;
    cout << c << endl;
    //or
    int d{0b0100};
    int e{0b1110};
    int f=d|e;
    cout << f <<endl;
    //xor
    int g{0b1010};
    int h{0b0110};
    int i=g^h;
    cout << i << endl;
    //not
    int j{0b1111};
    cout << j << " " <<~j << endl;
    cout <<~35 << endl;
    //bitwise left shift
    int k{0b1010};
    cout << (k<<1) << endl;
    cout << (k>>1) << endl;
    cout << (10 << 1) << endl;
    cout << (10>>1) << endl;
    cout << (10 << 2) << endl;
}