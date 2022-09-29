#include <iostream>
using namespace std;
//copy the defination of the function and paste at fxn call (1)
inline int cube(int s){
	return s*s*s;
}//if fxn. involves loop, goto, switch then (1) does not take place
//if return type is void then it will not copy fxn. at fxn. call place
int main(){
	cout << "the cube of 3 is " << cube(3)<<endl;
	return 0;
}