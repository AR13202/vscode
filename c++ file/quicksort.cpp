#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int start,int end){
    int key = arr[end];
    int p = start;
    for(int i=start;i<end;i++){
        if(arr[i]<=key){
            swap(arr[i],arr[p]);
            p++;
        }
    }
    swap(arr[p],arr[end]);
    return p;
}
void quicksort(int arr[],int start,int end){
    if(start<end){
        int temp = partition(arr,start,end);
        quicksort(arr,start,temp-1);
        quicksort(arr,temp+1,end);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int n=8;
    int arr[8] = {7,2,1,6,5,8,3,4};
    quicksort(arr,0,n-1);
    printArray(arr,n);
}