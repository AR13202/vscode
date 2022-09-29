#include <iostream>
#include "DLL.cpp"
using namespace std;
int main(){
	Node * n1 = new Node(2);
	Node * n2 = new Node(3);
	Node * n3 = new Node(6);
	n1->next = n2;
	n2->next = n3;
	n3->prev = n2;
	n2->prev = n1;
	cout << n1->next->data << endl;
	cout << n2->next->data << endl;
	cout << n2->prev->data << endl;
	cout << n3->prev->data << endl;
	return 0;
}