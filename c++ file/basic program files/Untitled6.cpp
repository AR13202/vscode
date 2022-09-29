# include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	if (num >= 0) {
		cout << "you entered a positive integer: " << num << endl; 
	}
	else {
		cout << "You have entered a negative integer: " << num << endl;
	}
	cout << "This line will print always";
	return 0;
}
