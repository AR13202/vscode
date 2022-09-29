# include <iostream>
using namespace std;

class counter{
	int id;
	public:
		counter(int i){
			id = i;
			cout << "Constructor with id = " << id << endl;
		}
		~counter(){
			cout << "Destructor with id = " << id << endl;
		}
};
int main(){
	counter c1(6);
	counter c2(9);
	counter c3(5);
	return 0;
}