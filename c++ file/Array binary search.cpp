# include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x){
	if (r >= 1){
		int mid = 1+(r-1)/2;
		if (arr[mid]== x){
			return mid;
		}
		if (arr[mid> x]){
			return binarySearch(arr, 1, mid-1,x);
		}
		return binarySearch(arr,mid+1,r,x);		
	}
	return -1;
}
int main(void){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	cout << "Enter the value: ";
	for (int i = 0;i<n;i++){
		cin >> arr[i];
	}
	int x;
	cout << "Enter value to be searched: ";
	cin >> x;
	int a = sizeof(arr)/sizeof(arr[0]);
	int result = binarySearch(arr,0,a-1,x);
	(result == -1) ? cout << "Elemet is not present in array"		
				: cout << "Element is at index " << result;
}                                                      
 