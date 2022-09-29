#include <iostream>
using namespace std;
bool check(int arr[],int h,int n,int q){
    int a =0;
    for(int i=0;i<n;i++){
        if(arr[i]>=h+1){
            a++;
        }
    }
    if(a>=h+1){
        return true;
    }
    return false;
}
void checkindex(int arr[],int n,int q){
    int arr1[n];
    arr1[0] = 1;
    int h = 1;
    for(int i=1;i<n;i++){
        if(check(arr,h,i+1,arr[i])){
            h++;
            arr1[i] = h;
        }else{
            arr1[i] = h;
        }
    }
    cout << "Case #" << q << ": ";
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        checkindex(arr,n,i);
    }
    return 0;
}