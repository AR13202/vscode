#include<iostream>
using namespace std;
struct student{
    int uid;
    string name;
};
void display(struct student s1){
    cin >> s1.uid >> s1.name;
    cout << s1.uid << " " << s1.name << endl;
}
int main(){
    student s1,s2;
    display(s1);
    display(s2);
    return 0;
}