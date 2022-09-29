#include <iostream>
#include "LL.cpp"
using namespace std;
int main(){
	// creating Class Node object "statically"
	Node n1(1);
	Node * head = &n1;
	Node n2(2);
	n1.next = &n2;
	cout << head->data << " " << head->next->data << "\n"; 
	
	// creating Class Node object "Dynamically"
	Node * n3 = new Node(3);
	Node * n4 = new Node(4);
	n3->next = n4;
	cout << n3->data << " " << n4->data;
	return 0;
}