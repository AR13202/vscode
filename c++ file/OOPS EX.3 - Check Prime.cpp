#include<iostream>
using namespace std;
class Prime{
	public:
		int n;
		void inp();
		void check();
};
void Prime::inp(){
	cout << "enter a number: ";
	cin >> n;
}
void Prime::check(){
	string s = "prime";
	for (int i = 2; i<n;i++){
		if (n%i==0){
			s = "not prime";
			break;
		}
	}
	cout << s << endl;;
}
int main(){
	Prime a;
	a.inp();
	a.check();
	return 0;
}