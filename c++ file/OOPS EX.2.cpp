#include<iostream>
using namespace std;
class numbers {
	public:
		int a,b,c;
		void val();
		void average();
		void sum(){
			cout <<"sum: " << a+b+c << endl;
		}
};
void numbers::val(){
	cout << "enter three numbers: ";
	cin >> a >> b >> c;
}
void numbers::average(){
	cout << "average: " << (a+b+c)/3;
}
int main()
{
	numbers ob;
	ob.val();
	ob.sum();
	ob.average();
	return 0;
}