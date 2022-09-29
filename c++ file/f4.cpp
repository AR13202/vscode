#include<iostream>
using namespace std;
int main(){
    int *y=NULL; 
    int a[8] = {1,2,3,4,5,6,7,8};
    y=a;
    int i=0;
    while(i<5){
        cout <<*y << " ";
        y+=2;
        i++;
    }
    return 0;
}