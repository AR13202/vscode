#include<iostream>
using namespace std;
void check1(int arr[2][2],int i,int j){
    arr[i][j]=2;
    for(int k=0;i<3;i++){
        arr[i][k]=2;
        arr[k][j]=2;
    }
}

int main(){
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]==1){
                check1(arr,i,j);
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]==2){
                arr[i][j]=1;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}