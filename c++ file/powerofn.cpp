#include <iostream>
using namespace std;
int main(){
	int n,a;
	cin >> n>>a;
	int b=1;
	for(int i=1;i<=a;i++){
		b*=n;
	}	
	cout << b <<endl;
}