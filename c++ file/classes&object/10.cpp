#include <iostream>
using namespace std;
//multi inheritance
class vehicle{
    protected:
        float cost;
    public:
        string color;
};
class car: protected vehicle{
    public:
        int model;
    void input_display(){
        cin >> model;
        cout << model;
        cin >> cost >> color;
        cout << cost << endl << color << endl; 
    }
};
class bus: public car{
    public:
        string brand;
    void input(){
        cin >> cost >> color >> model;
        cout << cost << endl;
        cout << color << endl;
        cout << model << endl;
    }
};
int main(){
    bus b1;
    b1.input();
    return 0;
} 