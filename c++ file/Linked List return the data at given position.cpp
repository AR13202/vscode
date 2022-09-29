# include <iostream>
using namespace std;
class Node {
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
int Getkey(Node* head, int index){
    Node* current = head;
    int count = 0;
    while (current != NULL) {
        if (count == index){
            return (current->key);
        }
        count++;
        current = current->next;
    }
    return 0;
};
int getlength(Node* head){
	Node* current = head;
	int count = 0;
	while (current != NULL){
		count++;
		current = current->next;
	}
	return count;	
};
int main(){
	Node* head = NULL;
    int x;
    cout << "Enter an postion: ";
    cin >> x;
    push(&head, 10);
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);
    push(&head, 24);
    push(&head, 7);
    push(&head, 36);
    push(&head, 27);
    cout << "Linked list: ";
    printList(head);
    cout << endl;
    cout << "data at postion " << x << " is " << Getkey(head, x-1);
    cout << endl;
	cout << "total number of nodes in a linked list is " << getlength(head);
	return 0;
}