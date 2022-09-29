#include <bits/stdc++.h>
using namespace std; 
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];  
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
     
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
void quickSort(int arr[], int low, int high,int size) 
{ 
	printArray(arr,size);
	cout << endl;
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1,size); 
        quickSort(arr, pi + 1, high,size); 
    } 
} 
int main() 
{ 
	int n;
	cout << "Enter size: ";
	cin >> n;
	cout << "Enter values: ";
	int arr[100];
	for (int i = 0;i<n;i++){
		cin >> arr[i] ;
	} 
    quickSort(arr, 0, n - 1,n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 