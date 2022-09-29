#include<iostream>
using namespace std;
class car{
    private:
        int model;
    protected:
        float cost;
    public:
        string color;
    friend class vehicle;
};
class vehicle{
    public:
        void input(car &t){
            cin >> t.model >> t.cost;
        }
        void display(car &t){
            cout << "model = " << t.model;
            cout << endl << "cost = " << t.cost;
        }
};
int main(){
    car c1;
    vehicle v;
    v.input(c1);
    v.display(c1);
    return 0;
}
