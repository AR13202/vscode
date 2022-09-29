#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    //major diagnol
    for(int i=0;i<3;i++){
        cout << a[i][i] << " ";
    }
    cout << endl;
    //minor diagnol
    for(int i=0;i<3;i++){
        cout << a[i][2-i] << " ";
    }
}