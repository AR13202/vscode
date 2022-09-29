# include <iostream>
using namespace std;
int main()
{
	int n = 1;
	int x = ++n;
	int z = ++ ++n;
	int v = n++;
	int y = --n;
	int a = -- --n;
	int b = n--;
	cout << x << endl;
	cout << z << endl;
	cout << v << endl;
	cout << y << endl;
	cout << a << endl;
	cout << b << endl;
	return 0;
}
