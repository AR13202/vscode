#include <iostream>
#include "LL.cpp"
using namespace std;
int main(){
	Node n1(2);
	Node n2(3);
	n1.next = &n2;
	cout << n1.data << " " << n2.data;
}