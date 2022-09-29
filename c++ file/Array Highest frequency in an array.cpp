#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  for (int i=0;i<n;i++){
    int a;
    cin >> a;
    int arr[a];
    for (int j = 0; j < a;j++){
      cin >> arr[j];
    }
    int max_count = 0;
    int ele = 0;
    for (int k = 0; k < a; k++){
      int count = 0;
      for (int l = 0; l < a;l++){
        if (arr[k]==arr[l]){
          count++;
        }
      }
      if (count > max_count){
        max_count = count;
        ele = arr[i];
      }
    }
    cout << ele << endl;
  }
  return 0;
}