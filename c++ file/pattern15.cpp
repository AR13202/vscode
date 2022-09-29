#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a=65+n-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				cout << char(a);
			}else{
				cout << " ";
			}
		}
		for(int m=n-i-2;m>=0;m--){
			if(m==0){
				cout <<char(a);
			}else{
				cout <<" ";
			}
		}
		a--;
		cout << endl;
	}
}