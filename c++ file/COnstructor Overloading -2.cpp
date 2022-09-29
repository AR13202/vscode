# include <iostream>
using namespace std;
class construct {
	public:
		int area;
		construct(int i, int j, int k){
			area = i*j*k;
		}
		construct(int a, int b){
			area = a*b;
		}
		void disp(){
			cout << area << endl;
		}
};
int main(){
	construct abc(12,23,34);
	construct abc2(70,14);
	abc.disp();
	abc2.disp();
	return 1;
}