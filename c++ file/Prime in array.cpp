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
	cout << "Prime in an Array: ";
	for (int i = 0; i < n;i++){
		int j = arr[i];
		string s = "Prime";
		for (int k = 2 ; k < j;k++){
			if (j % k == 0){
				s = "not Prime";
				break;
			}
		}
		if (s=="Prime"){
			cout << arr[i] << " ";
		}
		s = "Prime";
	} 
	return 0;
}