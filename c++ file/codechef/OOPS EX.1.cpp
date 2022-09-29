#include<iostream>
using namespace std;
class student {
	public:
		string name;
		int rollno;
		int mobno;
		string email;
		string address;
};
int main()
{
	student s1;
	s1.name = "Aryan";
	s1.rollno = 3728;
	s1.mobno = 7894561000;
	s1.email = "abcd@gmail.com";
	s1.address = "000, jhds, pkl";
	cout << "name: "<<s1.name << endl;
	cout << "rollno: " <<s1.rollno << endl;
	cout << "mobno: " << s1.mobno << endl;
	cout << "email: " << s1.email << endl;
	cout << "address: " << s1.address << endl;
	return 0;
}