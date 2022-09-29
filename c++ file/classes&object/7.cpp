#include<iostream>
using namespace std;
//dynamic constructor to be done
class car{
    private:
        int model;
        float cost;
        string *color;
    public:
        car(int m1,float c1){
            model=m1;
            cost=c1;
        }

        void display(){
            cout << model << endl << cost << endl;
        }
};
int main(){
    car c1(2,3.012);
    c1.display();
    return 0;
}