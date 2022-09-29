# include <iostream>
using namespace std;
int main()
{
	int a, b, sum, diff, pro, mod;
	float div;
	cout <<"Enter two integer: ";
	cin >> a >> b;
	
	sum = a + b;
	diff = a - b;
	pro = a * b;
	div = (float)a / b;
	mod = a % b;
	
	cout << a << " + " << b << " = " << sum <<endl;
	cout << a << " - " << b << " = " << diff <<endl;
	cout << a << " * " << b << " = " << pro <<endl;
	cout << a << " / " << b << " = " << div <<endl;
	cout << a << " % " << b << " = " << mod <<endl;
	return 0; 	
}
