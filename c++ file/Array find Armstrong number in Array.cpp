# include <iostream>
# include <math.h>
# include <string>
using namespace std;
int main(){
	int n;
	cout << "enter array size: ";
	cin >> n;
	int arr[n];
	for (int i = 0 ; i < n ;i++){
		cin >> arr[i];
	} 
	for (int i = 0 ; i < n ; i++){
		int count = 0 ;
		while (arr[i]>0){
			arr[i] /= 10;
			++count;
		}
		int r = 0;
		int j;
		while (arr[i]>0){
			int d = arr[i]%10;
			for (j = 0; j < count; j++){
				d = d * d;
			}
			r = r + d;
			arr[i] /= 10;
		}
		if (arr[i]==r){
			cout << arr[i] << " is and Armstrong Number." << endl;
		}
	}
}