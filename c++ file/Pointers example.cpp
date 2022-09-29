# include <iostream>
using namespace std;
void show(){
	int a = 20;
	int *p;
	p = &a;
	cout << "Value at p = " << p << endl;
	cout << "Value at a = " << a << endl;
	cout << "Value at *p = " << *p << endl;
}
int main()
{
	show();
}