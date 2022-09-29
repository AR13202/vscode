# include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter array size: ";
	cin >> n;
	int arr[n];
	cout << "enter inputs in array: ";
	for (int i = 0; i < n;i++){
		cin >> arr[i];
	}
	cout << "Output Array: ";
	for (int i = 0; i < n;i++){
		cout << arr[i] << " ";
	} 
	cout << endl;
	cout << "Palindrome in an array: ";
	for (int i = 0; i < n;i++){
		int j = arr[i];
		int sum = 0;
		while (j != 0) {
			int k = j % 10;
			sum = sum*10 + k;
			j = j / 10;
		}
		if (sum == arr[i]){
			cout << arr[i] << " ";
		}
	}
	return 0; 
}