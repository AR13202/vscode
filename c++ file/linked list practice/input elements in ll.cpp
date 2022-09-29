#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node {
   public:
  int key;
  Node* next;
};
void push(Node** head_ref, int new_key){
    Node* new_node = new Node();
    new_node->key = new_key;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(Node* n){
	while(n != NULL){
		cout << n->key <<" ";
		n = n->next;
	}
};
int main() {
	Node* head = NULL;
	int n;
	cout << "Enter number of elements: ";
	cin >> n;
	for (int i = 0;i<n;i++){
		int a;
		cout << "Enter elements at position " << n-i << ": "; 
		cin >> a;
		push(&head, a);
	}
    cout << "Linked list: ";
    printList(head);
}