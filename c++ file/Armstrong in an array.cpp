# include <iostream>
#include<bits/stdc++.h>
# include <math.h>
using namespace std;

int order(int j){
	int count = 0;
	while (j != 0){
		count ++;
		j /= 10;
	}
	return count;
}

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
	cout << "Armstrong number in array: ";
	for (int i = 0; i < n;i++){
		int j = arr[i];
		int sum = 0;
		int q = order(j);
		while (j != 0) {
			int r = j % 10;
			sum += pow(r,q);
			j /= 10;
		}
		if (sum == arr[i]){
			cout << arr[i] << " ";
		}
	} 
	return 0;
}
