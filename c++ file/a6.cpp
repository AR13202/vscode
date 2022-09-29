#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    int a,b=0;
    cin >> a;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            b=1;
            cout<<"element found at index: "<<i;
        }
    }
    if(b==0){
        cout << "element not found";
    }
}