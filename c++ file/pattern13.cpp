#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i =n;i>=1;i--){
		for(int j=1;j<i;j++){
			cout <<" ";
		}
		for(int k=1;k<=n-i+1;k++){
			cout <<"*";
		}
		for(int l=1;l<n-i+1;l++){
			cout <<"*";
		}
		cout << endl;
	}
	for(int i=n;i>=1;i--){
		for(int k=n-i;k>0;k--){
			cout << " ";
		}
		for(int j=i;j>0;j--){
			cout << "*";
		}
		for(int l=i-1;l>0;l--){
			cout <<"*";
		}
		cout << endl;
	}
}