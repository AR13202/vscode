#include <iostream>
# include "LL.cpp"
using namespace std;
Node *takeInput(){
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1){
		Node *n1 = new Node(data);
		if (head == NULL){
			head = n1;
			tail = n1;
		}
		else {
			tail->next = n1;
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}
Node *push(Node *head,int data){
	Node *n1 = new Node(data);
	n1->next = head;
	return n1;
}
void printlist(Node *head){
	Node *temp = head;
	while (temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main(){
	Node *head = NULL;
	head = push(head,2);
	head = push(head,4);
	head = push(head,5);
	head = push(head,1);
	printlist(head);
	return 0;
}