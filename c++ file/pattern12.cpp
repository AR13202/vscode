#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
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