#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a=0,b=n;
	while(b>0){
		int c = b%10;
		a+=(c*c*c);
		b/=10;
	}
	if(a==n){
		cout << "armstrong\n";
	}else{
		cout << "not a armstrong\n";
	}
}