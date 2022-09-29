#include<iostream>
using namespace std;
class vehicle{
    private:
        int model;
    protected:
        float cost;
    public:
        string color;
};
class car2: protected vehicle{
    private:
        string brand;
    public:
        void input(){
            //cin >> model >> cost >> color >> brand; 
            cin >> brand;
            // accessing private variable(model) from the class gives error
        }
        void display(){
            //cout << model << " " << cost << " " << color << " " << brand;
            cout << brand;
            // accessing private variable(model) from the class gives error
        }
};

class car: public vehicle{
    private:
        string brand;
    public:
        void input(){
            //cin >> model >> cost >> color >> brand; 
            // accessing private variable(model) from the class gives error
        }
        void display(){
            //cout << model << " " << cost << " " << color << " " << brand;
            // accessing private variable(model) from the class gives error
        }
};
class car3: private vehicle{
    private:
        string brand;
    public:
        void input(){
            //cin >> model >> cost >> color >> brand; 
            // accessing private variable(model) from the class gives error
        }
        void display(){
            //cout << model << " " << cost << " " << color << " " << brand;
            // accessing private variable(model) from the class gives error
        }
};
int main(){ 
    car c1;
    car2 c2;
    car3 c3;
    c1.input();
    //c2.cost = 2345.34; // generating error 
    c1.display();
    return 0;
}