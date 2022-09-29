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
	string s = "prime";
	cout << "Prime numbers in array are: ";
	for (int i = 0; i<n;i++){
		for (int j = 2; j < arr[i];j++){
			if (arr[i]%j==0){
				s = "not prime";
				break;
			}
		}
		if (s == "prime" && arr[i]!= 1){
			cout << arr[i] << " "; 
		}
		s = "prime";
	}
	return 0;
}