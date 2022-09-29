#include<iostream>
using namespace std;
struct student{ // userdefined data type
    int uid;
    string name;
    int age;
    int fee;
};// s1; in place of ; in this line defines the object for this structure.

int main(){
    /*
    student s1; // another way of defining structure.
    cin >> s1.uid >> s1.name >> s1.age >> s1.fee ;
    student s2; 
    cin >> s2.uid >> s2.name >> s2.age >> s2.fee ;
    cout << s1.uid << " " << s1.name << " " << s1.age << " " << s1.fee << endl ;
    cout << s2.uid << " " << s2.name << " " << s2.age << " " << s2.fee ;
    */
    student s3[3]; // object can be array of object also;
    for(int i=0;i<3;i++){
        cin >> s3[i].uid  >> s3[i].name >> s3[i].age >> s3[i].fee;
        cout << s3[i].uid << " " << s3[i].name << " " << s3[i].age << " " << s3[i].fee ;
    }
    return 0;
}