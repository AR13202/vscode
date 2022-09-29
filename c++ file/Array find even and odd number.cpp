# include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	cout << "enter values in an array: ";
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}	
	for (int i = 0 ; i < n; i++){
		if (arr[i]%2==0){
			cout << arr[i] << " is an even number." << endl;
		}
		else {
			cout << arr[i] << " is an odd number." << endl;
		}
	}
	return 0;
}