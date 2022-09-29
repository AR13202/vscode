# include <iostream>
using namespace std;
void add(int i,int j){
	cout << "sum of two numbers " << i+j << endl;
}
void add(int i,int j,int k){
	cout << "sum of three numbers " << i+j+k << endl;
}
int main()
{
	add(12,34);
	add(23,34,56);
}