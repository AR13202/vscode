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
	cout << "reversed array: ";
	for (int i = n-1; i >= 0;i--){
		cout << arr[i] << " ";
	} 
	return 0;
}