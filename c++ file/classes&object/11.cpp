#include<iostream>
using namespace std;
//multiple inheritance
class base1{
    public:
        void display(){
            cout << "base1\n";
        }
};
class base2{
    public:
        void display(){
            cout << "base2\n";
        }
};

class derived:public base1, public base2{
    public:
        void output(){
            cout << "derived\n";
        }
};
int main(){
    derived dl;
    dl.output();
    dl.base1::display();
    dl.base2::display();
    return 0;
}