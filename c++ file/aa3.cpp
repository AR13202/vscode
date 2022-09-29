#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    int b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> b[i][j];
        }
    }
    int add[3][3];
    int sub[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            add[i][j] = a[i][j]+b[i][j];
        }
    }
    cout << "add matrix: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << add[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sub[i][j] = a[i][j]-b[i][j];
        }
    }
    cout << "sub matrix: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }
}