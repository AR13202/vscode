# include <iostream>
using namespace std;
class counter{
	int c;
	public:
		counter(int a){
			c = a;
		}
		counter(counter &ob){
			cout << "copy constructor invoked"<< endl;
			c = ob.c;
		}
		void show();
};
void counter::show(){
	cout << c << endl;
}
int main(){
	counter obj(10);
	counter obje(obj);
	obj.show();
	obje.show();
	return 0;
	
}