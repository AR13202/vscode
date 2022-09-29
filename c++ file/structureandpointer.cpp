#include<iostream>
using namespace std;
struct student{
    int uid;
    string name;
};
int main(){
    student s1;
    student *s2=&s1;
    cin >> s2->uid >> s2->name;
    cout << s2->uid << endl;
    cout << s1.name;
}