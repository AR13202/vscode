# include <iostream>
using namespace std;
class construct {
	public:
		float area;
		construct(){
			area = 0;
		}
		construct(int a, int b){
			area = a*b;
		}
		void disp(){
			cout << area << endl;
		}
};
int main(){
	construct abc;
	construct abc2(70,14);
	abc.disp();
	abc2.disp();
	return 1;
}