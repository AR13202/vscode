#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int l=1;
    while(l<=t){
        int n,m;
        cin >> n >> m;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        cout << "Case #" << l <<": " << sum%m << endl;
        l++;
    }
}