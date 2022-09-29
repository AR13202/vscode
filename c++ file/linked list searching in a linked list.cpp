#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    Node* next;
};
void printList(Node* n){
	while(n != NULL){
		cout << n->key <<" ";
		n = n->next;
	}
};
void push(Node** head_ref, int new_key){
    Node* new_node = new Node();
    new_node->key = new_key;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
bool search(Node* head, int x)
{
	int count = 0;
    Node* current = head; 
    while (current != NULL)
    {
        if (current->key == x){
            cout << "position is: " <<count+1 << endl;
            return true;
        }
        count++;
        current = current->next;
    }
    return false;
}
int main(){
    Node* head = NULL;
    int x;
    cout << "Enter a number to be searched: ";
    cin >> x;
    push(&head, 10);
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);
    cout << "Linked list: ";
    printList(head);
    cout << endl;
    if (search(head,x)){
    	cout << "Founded";
	}
	else {
		cout << "Not found";
	}
    return 0;
}
