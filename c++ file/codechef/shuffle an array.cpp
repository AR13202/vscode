#include <bits/stdc++.h>
using namespace std;
int shuffle(int arr[],int n){
	int a[n];
	int z=0;
	for (int i =0 ;i<n;i++){
		a[i] = (arr[i]+i+1)%2;
	}
	for (int i =0 ;i<n;i++){
		z += a[i];
	}
	return z;
}
int fact(int n){
	if (n <= 1){
		return n;
	}
	return n*fact(n-1);
}
int  shuffle_array(int arr[], int n){
	int arr2[n];
    unsigned seed = 0;
    shuffle(arr, arr + n,default_random_engine(seed));
    for (int i = 0; i < n; ++i)
        arr2[i] = arr[i];
     return shuffle(arr2,n);
}
int main(){
	int t;
	cin >> t;
	for (int i=0;i<t;i++){
		int n;
		cin >> n;
	    int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		int b = fact(n);
		int x = 0;
		for (int i = 0;i<b;i++){
			int z = shuffle_array(a, n);
			if (z > x){
				x = z;
			}
		}
		cout << x << endl;
	}
    return 0;
}