#include<iostream>
using namespace std;
//multiple inheritance
class base1{
    public:
        void display(){
            cout << "base1\n";
        }
};
// fxn overriding
class derived:public base1{
    public:
        void display(){
            base1::display();
            cout << "derived\n";
        }
};
int main(){
    derived dl;
    dl.display();
    return 0;
}