#include<iostream>
using namespace std;
long long int product(long long int n){
    long long int p=1;
    while(n>0){
        int b = n%10;
        p*=b;
        n/=10;
    }
    return p;
} 
long long int add(long long int n){
    long long int p=0;
    while(n>0){
        int b = n%10;
        p+=b;
        n/=10;
    }
    return p;
} 
int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        long long int n,m,count=0;
        cin >> n >> m;
        for(int j = n;j <=m;j++){
            long long int x = product(j);
            long long int y = add(j);
            if(x%y==0){
                count++;
            }
        }
        cout << "Case #" << i << ": " << count << endl;
    }
    return 0;
}