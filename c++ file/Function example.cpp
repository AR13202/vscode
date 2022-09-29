# include <iostream>
using namespace std;
int max(int a, int b) {
	if (a > b){
		return a;
	}
	else {
		return b;
	}
}
int main()
{
	int a, b;
	cout << "Enter two Numbers: ";
	cin >> a >> b;
	int m = max(a,b);
	cout << "maximum is " << m;
	return 0;
}