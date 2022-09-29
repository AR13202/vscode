#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a=0;
	while(n>0){
		int b=n%10;
		a=a*10+b;
		n/=10;
	}
	cout << a << endl;
	return 0;
}