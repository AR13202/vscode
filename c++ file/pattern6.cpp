#include <iostream>
using namespace std;
int main(){
	int l,b;
	cin >> l>>b;
	cout << endl;
	for(int j=0;j<l;j++){
		for(int i=1;i<=b;i++){
			if(i==1||i==b||j==0||j==l-1){
				cout <<"*";
			}else{
				cout <<" ";
			}
		}
		cout << endl;
	}
	return 0;
}