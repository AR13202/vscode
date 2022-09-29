#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *array1=new int(n);
    for(int i=0;i<n;i++){
        cin >> array1[i];
    }
    for(int i=0;i<n;i++){
        cout << array1[i] << endl;
    }
    delete(array1);
    cout << array1[0] <<endl;
    int *array2{new int[5]{1,2,3,4,5}};
    delete(array2);
    for(int i=0;i<5;i++){
        cout << array2[i] << " ";
    }
}