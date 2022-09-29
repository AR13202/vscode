#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void deleteNode(Node** head_ref, int key){
	Node* temp = *head_ref;
	Node* prev = NULL;
	
	if (temp != NULL && temp->data == key){
		*head_ref = temp->next;
		delete temp;
		return;
	}
	else{
	    while (temp != NULL && temp->data != key){
	        prev = temp;
	        temp = temp->next;
	    }
	    if (temp == NULL){
	        return;
	    }
	    prev->next = temp->next;
	    delete temp;
    }
}
void printList(Node* node){
    while (node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
}
int main(){
    Node* head = NULL;
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);
    push(&head, 24);
    push(&head, 7);
    push(&head, 36);
    push(&head, 27);
    cout << "Created Linked List: ";
    printList(head);
    cout << endl;
    int x;
    cout << "Enter a number to be deleted: ";
    cin >> x;
    deleteNode(&head, x);
    cout << "Linked List after Deletion: ";
    printList(head);
    return 0;
}