#include<iostream>
using namespace std;
int main(){
	int arr[4];
	arr[0]=8;
	arr[2]=2;
	arr[2/2]=6;
	arr[-1]=8;
	cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " "<< arr[6];
}