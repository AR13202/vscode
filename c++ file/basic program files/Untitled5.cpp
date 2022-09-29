# include <iostream>
using namespace std;
int main()
{
	int n = 7;
	int x = ++n;
	int z = ++ ++n;
	int v = n++;
	int n1 = 5;
	int y = --n1;
	int a = -- --n1;
	int b = n1--;
	cout << "increment"<< endl;
	cout << x << " "<< z << " " << v << endl;
	cout << "decrement" << endl;
	cout << y << " " << a << " " << b  << endl;
	return 0;
}
