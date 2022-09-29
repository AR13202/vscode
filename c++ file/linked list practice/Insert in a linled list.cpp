# include <iostream>
using namespace std;
struct Node{
	int data;
	int next;
	Node(int x){
		data = x;
		next = NULL;
	}
};
Node *insertb(Node *head , int x){
	Node *temp = new Node(x);
	temp->next = head;
	return temp;
}
void printList(Node* n){
	while(n != NULL){
		cout << n->data <<" ";
		n = n->next;
	}
};
int main(){
	Node *head = new Node(9);
	head = insertb(head , 10);
	head = insertb(head , 20);
	head = insertb(head , 30);
	printList(head);
	return 0;       
}