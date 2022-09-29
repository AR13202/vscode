#include<iostream>
using namespace std;
//c++ one plus for strutural lang. and other for object oriented lang.
template <class t> // stores typename(data type) in place of t;

/*t square(t x){
    return x*x;
}
int main(){
    int a = 4;
    float b = 3.2;
    cout << square(a) << endl;
    cout << square(b) << endl;
}*/

class A{
    private:
        t a;
        t b;
    public:
        A(t a1,t b1){
            a=a1;
            b=b1;
        }
        t add(){
            return a+b;
        }
};

int main(){
    A<int> addint(3,2);
    A<float> addfloat(4.5,7.8);
    cout << addint.add() << endl;
    cout << addfloat.add() << endl;
    return 0;
}