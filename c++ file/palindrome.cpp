#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int a=n;
	int b=0;
	while(a>0){
		int c=a%10;
		b=b*10+c;
		a/=10;
	}
	if(b==n){
		cout << "palindrome\n";
	}else{
		cout << "not a palindrome\n";
	}
}