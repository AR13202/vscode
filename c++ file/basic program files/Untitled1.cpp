#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int arr[5] = {5, 65, 45, 2, 25};
    for(int i = 1; i < 3; i++){
        arr[i] = arr[i-1] + arr[i+1];
        if(arr[i]%2 == 0){	
            arr[i] /= 2;
        }
    }
    for (int i = 0; i < 5 ; i++){
        cout << arr[i]<< " ";
    }
   return 0;
}