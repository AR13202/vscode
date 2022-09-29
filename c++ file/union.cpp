#include<iostream>
using namespace std;
struct student{
    int uid;
    int age;
    double fee;
};
union stud{ // works on space allocation
    int uid;
    int age;
    float fee;
};
int main(){
    student s1;
    stud s2;
    cin >> s1.age >> s1.fee >> s1.uid;
    cout << s1.uid << " " << s1.age << " " << s1.fee;
    cout << sizeof(s1) << endl;
    cout << sizeof(s2) << endl;
}