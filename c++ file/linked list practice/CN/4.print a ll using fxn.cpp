# include <iostream>
# include "LL.cpp"
using namespace std;
void print(Node * head){
	Node * temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main(){
	Node n1(2);
	Node n2(3);
	Node n3(4);
	Node n4(6);
	Node n5(1);
	Node *head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	print(head); 
	
	Node *a = new Node(45);
	Node *b = new Node(23);
	Node *c = new Node(24);
	Node *z = a;
	a->next = b;
	b->next = c;
	print(z);
	 
}