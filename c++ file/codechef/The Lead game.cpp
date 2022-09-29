#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	int A[t];
	int x = 0;
	int y = 0;
	for (int i = 0; i<t;i++){
		int a1,a2;
		cin >>a1 >>a2;
		x += a1;
		y += a2;
		int d = x-y;
		A[i] = d;
	}
	int B[t];
	for (int j = 0;j<t;j++){
		if (A[j] < 0){
			B[j] = A[j] - 2*A[j];
		} else {
			B[j] = A[j];	
		}
	}
	int C[t];
	for (int i = 0;i<t;i++){
		if (A[i]<0){
			C[i]=2;
		} else {
			C[i]=1;
		}
	}
	int max = 0,index=0;
	for (int i =0 ;i < t ;i++){
		if(B[i]>max){
			max = B[i];
			index = i;
		}
	}
	cout << C[index] << " " << max;
	return 0;
}