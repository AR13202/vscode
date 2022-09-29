#include<iostream>
using namespace std;
class cu{
    private:
        int model;
        string color;
    protected:
        float cost;
    public:
        string brand;
        void datainput(){
            cin >> model;
            cin >> color;
            cin >> cost;
        }
        /*
        void display(){
            cout << model << " " << color;
        }
        */
        void display();
};
void cu :: display(){ // fxn of class outside class
    cout << model << " " << color << " " << cost;
}
int main(){
    cu c1;
    //c1.model=2022; 
    // private variable not accessible outside the class
    c1.datainput();// access private data member
    c1.display();
    // c1.cost; 
    // inaccessible protected variable (not accessible outside class)

}
/*
access specifier:
    public,private,protected
*/