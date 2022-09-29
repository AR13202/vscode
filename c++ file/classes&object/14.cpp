#include<iostream>
using namespace std;
class test{
    private:
        int a;
    public: 
        test(){
            a=0;
        }
        void operator++(){
            a++;
        }
        void operator--(){
            a--;
        }
        void display(){
            cout << a <<endl;
        }
};
int main(){
    test t1;
    ++t1;
    t1.display();
    --t1;
    t1.display();
}