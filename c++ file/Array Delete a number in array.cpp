# include <iostream>
using namespace std;
int delement(int n , int arr[], int del, int arr1[]){
	for (int i = 0; i < n; i++){
		if (arr[i]==del){
			continue;
		}
		else {
			arr1[i] = arr[i];
		}
	}
	return arr1;
}
int main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	int arr[n-1];
	cout << "Enter the value: ";
	for (int i = 0;i<n;i++){
		cin >> arr[i];
	}
	cout << "Array: ";
	for (int i = 0; i <6;i++){
		cout << arr[i]<< " ";
	}
	int del;
	cout << "enter value to be deleted: ";
	cin >> del;
	delement(n, arr, del, arr1);
	cout << "New Array: ";
    for (i = 0; i < n - 1; i++){
        cout << arr1[i] << " ";
	}
	cout << endl;
}                      
