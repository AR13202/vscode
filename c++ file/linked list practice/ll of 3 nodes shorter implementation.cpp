# include <iostream>
using namespace std;
struct Node {
	int data;
	Node *next;
	Node (int x){
		data = x;
		next = NULL;
	}
};
void printList(Node* n){
	while(n != NULL){
		cout << n->data <<" ";
		n = n->next;
	}
};
int main(){
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	printList(head);
	return 0;
}