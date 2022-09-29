# include <iostream>
using namespace std;
void print(int i){
	cout << "Here is int " << i << endl;
}
void print(double i){
	cout << "Here is double " << i << endl;
}
void print(char const *i){
	cout << "Here is char " << i << endl;
}
int main()
{
	print(10);
	print(10.10);
	print("Aryan");
}