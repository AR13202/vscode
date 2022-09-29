# include <iostream>
using namespace std;
string check(int a){
	string s = "prime";
	for (int i = 2; i<a;i++){
		if (a%i==0){
			s = "not prime";
			break;
		}
	}
	return s;
}
int main()
{
	int a;
	cout << "Enter a number: ";
	cin >> a;
	string p = check(a);
	cout << a << " is " << p;
}