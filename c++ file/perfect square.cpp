#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			a+=i;
		}
	}
	if(a==n){
		cout << "true\n";
	}else{
		cout << "false\n";
	}
}