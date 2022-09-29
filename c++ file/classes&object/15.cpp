#include<iostream>
using namespace std;
//runtime polymorphism
class base{
    public:
    //virtual function
        void display(){
            cout << "Base\n";
        }
        virtual void output()=0;
};
//abstract class is a class which contains one pure virtual fxn.
class derived: public base {
    public:
        void output(){
            cout << "derived\n";
        }
};

int main(){
    base *b1;
    derived d1;
    b1 = &d1;
    b1->display();
    b1->output();
    return 0;
}