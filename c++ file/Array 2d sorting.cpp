# include <iostream>
using namespace std;
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
} 
void sorting(int arr[][], int n, int m){
	for (int k = 0; k < n;k++){
		for (int i = 0; i < m-1; i++){
        	int min_idx = i;
        	for (int j = i+1; j < m; j++){
        		if (arr[j] < arr[min_idx]){
            		min_idx = j;
            	}
        	swap(&arr[min_idx], &arr[i]);
        	}
    	}
	}
}
void printArray(int arr[][], int n, int m){
    for (int i=0; i < n; i++){
    	for (int j = 0 ; j < m ; j++){
	        cout << arr[i][j] << " ";
	    }
    cout << endl;
	}
}
int main(){
	int n,m;
	cout << "Enter number of rows and column: ";
	cin >> n >> m;
	int arr[n][m];
	cout << "Enter values in 2d Array: " << endl;
	for (int i =0 ; i < n;i++){
		for (int j = 0 ;j <m;j++){
			cin >> arr[i][j];
		}
	}
	cout << "2-d Array: " << endl;
	for (int i =0 ; i < n;i++){
		for (int j = 0 ;j <m;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}