// NOT STRASSESEN'S IMPLEMENTATION
#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr1[2][2] = {{1,3},{7,5}};
	int arr2[2][2] = {{6,8},{4,2}};
	int arr3[2][2] = {{0,0},{0,0}};
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				arr3[i][j] += arr1[i][k]*arr2[k][j];
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
}