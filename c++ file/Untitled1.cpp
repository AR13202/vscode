#include<bits/stdc++.h>
using namespace std;
int g(long long int arr[],int l){
	if(l%2==0){
		if (l==0){
		    return 0;
		}else if (l == 1){
			return 1;
		} else if (l == 2){
			if (abs(arr[0]-arr[1])<=1){
				return 1;
			} else {
				return 0;
			}
		}
		long long int arr1[l/2];
		int j=0;
		for (int i=0;i<l;i+=2){
			if (abs(arr[i]-arr[i+1])<=1){
				arr1[j] = arr[i]+arr[i+1];
				j++;
			}
		}
		l = sizeof(arr1)/sizeof(arr1[0]);
		return g(arr1,l);
	} else {
		int i=0;
		int j=0;
		long long int arr1[l/2];
		while (i < l){
			if (abs(arr[i]-arr[i+1])<=1){
				arr1[j] = arr[i]+arr[i+1];
				i+=2;
				j++;
			}else {
				i++;
			}
		}
		l = sizeof(arr1)/sizeof(arr1[0]);
		return g(arr1,l);
	}
}
int main(){
	int t;
	cin >> t;
	for (int z = 0;z<t;z++){
		int n;
		cin >> n;
		int l = pow(2,n);
		long long int arr[l];
		for (int i=0;i<l;i++){
			cin >> arr[i];
		}
		int a = g(arr,l);
		if (a==1){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int g(long long int arr[],int l){
	if (l==0){
		return 0;
	}else if (l == 1){
		return 1;
	} else if (l == 2){
		if (abs(arr[0]-arr[1])<=1){
			return 1;
		} else {
			return 0;
		}
	}
	sort(arr,arr+l);
	int i=0;
	int j=0;
	long long int arr1[l/2];
	while (i < l){
		if (abs(arr[i]-arr[i+1])<=1){
			arr1[j] = arr[i]+arr[i+1];
			i+=2;
			j++;
		}else {
			i++;
		}
	}
	l = sizeof(arr1)/sizeof(arr1[0]);
	return g(arr1,l);
}
int main(){
	int t;
	cin >> t;
	for (int z = 0;z<t;z++){
		int n;
		cin >> n;
		int l = pow(2,n);
		long long int arr[l];
		for (int i=0;i<l;i++){
			cin >> arr[i];
		}
		int a = g(arr,l);
		if (a==1){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		
	}
	return 0;
}