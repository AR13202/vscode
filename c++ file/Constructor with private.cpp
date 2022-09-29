# include <iostream>
using namespace std;
class Point {
	private:
		int x,y;
	public:
		Point(int x1, int y1){
			x = x1;
			y = y1;
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
		int greater(int x, int y){
			if (x > y){
				return x;
			}
			else {
				return y;
			}
		}
};
int main(){
	int a,b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	Point p1(a, b);
	cout << "p1.x: " << p1.getX()<<", p1.y: " << p1.getY() <<endl;
	cout << "Greater number is: " << p1.greater(a,b);
	return 0;
}