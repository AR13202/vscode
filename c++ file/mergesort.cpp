//error
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void merge(vector<int> arr,int l,int r,int mid){
    vector<int> arr2;
    int a=0;

    for(int i=l;i<=mid;i++){
        arr2[a] = arr[l];
        a++;
    }
    vector<int> arr3;
    a=0;
    for(int i=mid+1;i<=r;i++){
        arr3[a] = arr[l];
        a++;
    }
    vector<int> arr4;
    int i=0,j=0;
    while(i<arr2.size() && j<arr3.size()){
        if(arr2[i]<=arr3[j]){
            arr4.push_back(arr2[i]);
            i++;
        }else{
            arr4.push_back(arr3[j]);
            j++;
        }
    }
    for(int k=i;k<arr2.size();k++){
        arr4.push_back(arr2[k]);
    }
    for(int k=j;k<arr3.size();k++){
        arr4.push_back(arr2[k]);
    }
    j=0;
    for(int i=l;i<=r;i++){
        arr[i] = arr4[j];
        j++;
    }
}
void mergesort(vector<int> arr,int l,int r){
    if(l>=r){
        return;
    }
    int mid = (l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,r,mid);
}
int main(){
    vector<int> arr = {28,12,19,40,12,18,21,30};
    int r = arr.size() - 1;
    int l=0;
    mergesort(arr,l,r);
    for(int i=0;i<arr.size();i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}