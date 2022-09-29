# include <iostream>
using namespace std;
void fib(int num){
	int n1 = 0;
	int n2 = 1;
	cout << n1 << " " << n2 << " ";
	int i = 2;
	while(i<num)  
 	{    
  		int n3=n1+n2;    
  		cout<<n3<<" ";    
  		n1=n2;    
  		n2=n3;
		i++;    
 	}   
	return ; 
}
int main(){
	int num = 7;
	fib(num); 
	return 0;
}