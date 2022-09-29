#include<iostream>
using namespace std;
int main(){
    int arr[8] = {34,23,56,78,12,345,78,30};
    int max=0,min=INT_MAX;
    for(int i=0;i<8;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << max << " " << min;
}