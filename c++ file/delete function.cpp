# include <iostream>
using namespace std;
int main(){
	int x = 7;
	int *ptr1 = &x;
	int *ptr2 = (int *)malloc(sizeof(int));
	int *ptr3 = new int;
	int *ptr4 = NULL;
	delete ptr1;
	delete ptr2;
	delete ptr3;
	delete ptr4;
	getchar();
	return 0;	
}