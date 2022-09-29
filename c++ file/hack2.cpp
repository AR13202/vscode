#include<bits/stdc++.h>
using namespace std;
void matrix(char arr[100][100],int r,int c){
    char arr2[r][c];
    char* begin = &arr2[0][0];
    size_t size = sizeof(arr2) / sizeof(arr2[0][0]);
    fill(begin, begin + size, '.');
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]=='^'){
                arr2[i][j]='^';
                if(i<(r-1)&&j<(c-1)){
                    arr2[i+1][j]='^';
                    arr2[i][j+1]='^';
                    arr2[i+1][j+1]='^';
                }else if(i==(r-1) && j==(c-1)){
                    arr2[i-1][j]='^';
                    arr2[i][j-1]='^';
                    arr2[i-1][j-1]='^';
                }else if(i==(r-1)){
                    arr2[i-1][j]='^';
                    arr2[i][j+1]='^';
                    arr2[i-1][j+1]='^';
                }else{
                    arr2[i+1][j-1]='^';
                    arr2[i+1][j]='^';
                    arr2[i][j-1]='^';
                }                                
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr2[i][j];
        }
        cout << endl;
    }
}

int count_tree(char arr[100][100],int r,int c){
    int q=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]=='^'){
                q++;
            }
        }
    }
    return q;
}
string tree(char arr[100][100],int r,int c){
    if(count_tree(arr,r,c)==0){
        return "Possible";
    }
    if (r<2 || c<2){
        return "Impossible";
    }else{
        return "Possible";
    }
}
int main(){
    int t;
    cin >> t;
    for(int q=1;q<=t;q++){
        int r,c;
        cin >> r >> c;
        char arr[100][100];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin >> arr[i][j];
            }
        }
        string s = tree(arr,r,c);
        if(s=="Possible"){
            cout << "Case #"<<q<<": "<<s<<endl;
            matrix(arr,r,c);
        }else{
            cout << "Case #"<<q<<": "<<s<<endl;
        }
    }
}