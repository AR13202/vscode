#include <iostream>
#include "LL.cpp"
using namespace std;
int main(){
	Node n1(1);
	Node n2(2);
	n1.next = &n2;
	Node n3(3);
	n2.next = &n3;
	Node n4(4);
	n3.next = &n4;
	Node n5(5);
	n4.next = &n5;
	cout << "Statically: ";
	cout << n1.data << " " << n2.data << " " << n3.data << " " << n4.data << " " << n5.data << "\n";
	return 0;
}