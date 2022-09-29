# include <iostream>
using namespace std;
int func(int a){
	int s = 1;
	for (int i = 1;i<=a;i++){
		s *= i;
	}
	return s;
}
int b = 3;
int main(){
	cout <<"global factorial is " << fucn();
	int x = 4;
	cout <<"local factorial is " << fucn(x);
	return 0;
 }