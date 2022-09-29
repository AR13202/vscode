# include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	cout << "Enter the value: ";
	for (int i = 0;i<n;i++){
		cin >> arr[i];
	}
	int a;
	cout << "Enter the key to search in the array: ";
	cin >> a;
	int i;
	for (i = 0; i < n;i++){
		if (arr[i]==a){
			cout << "Key is found at position: "<<i+1;
			break;
		}
	} 
	if (i >= n ){
		cout << "Key not Found";
	}
	return 0;
}
