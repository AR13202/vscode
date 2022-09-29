# include <iostream>
using namespace std;
int fact(int n){
	int f = 1;
	if (n==1){
		return 1;
	}
	f = n * fact(n-1);
	return f;
}
int main(){
	int n;
	cin >> n;
	cout << fact(n);
	return 0;
}