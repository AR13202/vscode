#include<iostream>
using namespace std;
class car{
    private:
        int model;
        float cost;
        string color;
    public:
        car(){
            model=2022;
            cost=84.85;
            color="black";
        }
        void display(){
            cout << model << endl << cost << endl;
        }
};
int main(){
    car c1;
    c1.display();
    return 0;
}
