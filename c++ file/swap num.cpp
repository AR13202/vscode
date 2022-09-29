# include <iostream>
using namespace std;
void swapnum(int *a, int *b){
	int num;
	num =*a;
	*a=*b;
	*b = num;
	cout << "value of a " << *a << endl;
	cout << "value of b " << *b << endl;
}
int main()
{
	int a = 45, b = 12;
	swapnum(&a,&b);
}