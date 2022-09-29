#include <iostream>
using namespace std;
int main(){
	int n=10;
	int a=0,b=1;
	cout << a << " " << b << " ";
	for(int i=3;i<=n;i++){
		int d = a+b;
		cout << d << " ";
		a=b;
		b=d;
	}
	return 0;
}