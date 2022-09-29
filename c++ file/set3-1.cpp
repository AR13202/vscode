#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int s = n;
    if(s%2==0){
        s--;
    }
    for(int i=1;i<s;i+=2){
        if(arr[i]<arr[i+1] && arr[i-1]<arr[i+1]){
            int temp  = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }else if(arr[i]<arr[i-1] && arr[i+1]<arr[i-1]){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }else if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
            continue;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}