#include<iostream>
using namespace std;
class car{
    private:
        int model;
        float cost;
        string color;
    public:
        car(int m1,float c1){
            model=m1;
            cost=c1;
        };
        void display(){
            cout << model << endl << cost << endl;
        }
        ~car(){
            cout << "object distroyed\n";
        }
};
int main(){
    car c1(2,3.012);
    return 0;
}
