#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a>>b;
	int m=0,gcd=1;
	if(a>b){
		m=b;
	}else{
		m=a;
	}
	int i=2;
	while(i<m){
		if((a%i==0) && (b%i==0)){
			gcd=i;
		}
		i++;
	}
	cout <<"gcd= "<<gcd<<endl;
	return 0;	
}