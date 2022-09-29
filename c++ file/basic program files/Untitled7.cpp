# include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	if (num % 2 == 0) {
		cout << "you entered an even integer: " << num << endl; 
	}
	else {
		cout << "You have entered an odd integer: " << num << endl;
	}
	cout << "This line will print always";
	return 0;
}
