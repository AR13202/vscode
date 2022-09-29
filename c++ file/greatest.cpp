#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    /*
    if(a>b && a>c){
        cout << "a is greatest\n";
    }else if(b>c && b>c){
        cout << "b is greatest\n";
    }else{
        cout << "c is greatest\n";
    }
	// 4 condn. in above code
	*/
    (a>b)?(a>c)? cout << "a is greatest":cout <<"c is greatest":(b>c)? cout << "b is greatest": cout<<"c is greatest";

    return 0;
}
/*
if(a>b){
	if(a>c){
		a is greatest
	}else{
	c is greatest
}else{
	if(b>c){
		b is greatest
	}else{
		c is greatest
	}
}
the above is faster as it only have 3 condn. then above one

ternary statement for this:
(a>b)?(a>c)? cout << "a is greatest":cout <<"c is greatest":(b>c)? cout << "b is greatest": cout<<"c is greatest";
*/