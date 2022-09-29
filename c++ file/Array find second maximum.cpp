#include <bits/stdc++.h>
using namespace std;
int main(){
  	int n;
  	cin >> n;
    int arr[n];
  	for (int i = 0; i < n; i++){
    	cin >> arr[i];
  	}
    sort(arr, arr + n);
    int b = arr[n-2];
    cout << "Second maximum in an array: " << b;
    return 0;
}