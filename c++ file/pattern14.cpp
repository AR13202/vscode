#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int f=1,l=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		for(int m=n-i-2;m>=0;m--){
			if(m==0){
				cout <<"*";
			}else{
				cout <<" ";
			}
		}
		cout << endl;
	}
}