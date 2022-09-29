# include <iostream>
using namespace std;
int main(){
	int arr[6];
	cout << "Enter the value: ";
	for (int i = 0;i<6;i++){
		cin >> arr[i];
	}
	cout << "The values of the array are: ";
	for (int i = 0; i <6;i++){
		cout << arr[i]<< " ";
	}
	cout << endl;
	return 0;
}