# include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int a = n/2+1;
	int b = n-a;
	for (int i = 1; i <= a; i++){
		for(int j = 0; j<a-i; j++){
			cout << " ";
		}
		for(int k = 1; k <= i; k++){
			cout << "*";
		}
		for (int m = 1; m<=i-1;m++){
			cout << "*";
		}
		cout << endl;
	}
	for (int q = 1; q <= b; q++){
		for(int j = 1; j<=q; j++){
			cout << " ";
		}
		for(int k = b-q+1; k > 0; k--){
			cout << "*";
		}
		for (int m = b-q; m > 0;m--){
			cout << "*";
		}
		cout << endl;
	}		
	return 0;
}