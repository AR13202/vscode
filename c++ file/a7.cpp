//binary search
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    int item;
    cin >> item;
    int start = 0;
    int end = n-1;
    int mid = 0;
    while(start < end){
        mid = arr[(start+end)/2];;
        if(mid==item){
            cout << (start+end)/2;
            break;
        }else if(mid<item){
            start = mid;
        }else if(mid>item){
            end = mid;
        }
    }
    cout << ": " << mid << endl;
}