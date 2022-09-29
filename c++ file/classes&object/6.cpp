#include<iostream>
using namespace std;
class car{
    private:
        int model;
        float cost;
        string color;
    public:
        car(int m1,float c1){ // parameterized constructor.
            model=m1;
            cost=c1;
        }
        /*
        car(car &c3){
            model=c3.model;
            cost = c3.cost();
        }
        */
        // copy constructor
        void display(){
            cout << model << endl << cost << endl;
        }
};
int main(){
    car c1(2,3.012);
    car c2 = c1;//copy constructor
    c1.display();
    c2.display();
    return 0;
}
