#include <iostream>
#include "DLL.cpp"
using namespace std;
Node *head = NULL;
Node * takeInput(){
	int data;
	cin >> data;
	Node *tail = NULL;
	while (data != -1){
		Node *n1 = new Node(data);
		if (head == NULL){
			head = n1;
			tail = n1;
		} else {
			n1->prev = tail;
			tail->next = n1;
			tail = n1;
		}
		cin >> data;
	}
	return tail;
}
void printlist(Node *head){
	Node *temp = head;
	while (temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
void rprintlist(Node *head){
	Node *temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->prev;
	}
}
int main(){
	Node *tail = takeInput();
	cout << "DLL: ";
	printlist(head);
	cout << "Reversed DLL: ";
	rprintlist(tail);
	return 0;
}