# include <iostream>
using namespace std;
class abc{
	public:
		int a;
		int b;
		abc(){
			a = 12;
			b = 23;	
		}
		void check(int a,int b){
			if (a > b){
				cout << a << " is greater";
			}
			else {
				cout << b << " is greater";
			}
		}
};
int main(){
	abc obj;
	cout << "a " << obj.a << endl;
	cout << "b " << obj.b << endl;
	obj.check(obj.a, obj.b);
	return 1; 
}