/*
hirarichal inheritance
        a
       / \
      b   c
     /\   /\
    d  e  f g

    hybrid inheritance
        a h     
       / \|
      b   c 
     /\   /\
    d  e  f g

POLYMORPHISM
    -- Compile Time , Run Time
    Runtime: virtual fxn
    compile time: fxn overloading,operator overloading
    fxn overloading : differentiate by no.of arguments and order of arguments
    In Fxn Overloading add 'f' after a decimal type(float) in calling a fxn in main 
        eg: add(3,4.5f);
    Operating Overloading:
        sizeof, * .  ?  ::  cannot overload

*/
#include<iostream>
using namespace std;
//operator overloading
class operator_binary{
    private:
        int r;
        int i;
    public:
        //fxn overloading
        operator_binary(){
            r=0;
            i=0;
        }
        operator_binary(int r1,int r2){
            r=r1;
            i=r2;
        }
        //operator overloading
        operator_binary operator+(operator_binary o4){
            operator_binary temp;
            temp.r=r+o4.r;
            temp.i=i+o4.i;
            return temp;
        }
        void display(){
            cout << r << " " << i;
        }
};
int main(){
    operator_binary o1(2,3),o2(3,3),o5(4,5);
    operator_binary o3=o1+o2+o5;
    o3.display();
}