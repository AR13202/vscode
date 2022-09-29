#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
void push(Node** head_ref, int new_data){
    Node* new_node = (Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL) {
        (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
}
void printList(struct Node* node){
    struct Node* last;
    cout << "DLL : ";
    while (node != NULL) {
        cout << node->data << " ";
        last = node;
        node = node->next;
    }
    cout << endl;
}
int search(Node** head_ref, int x){
    Node* temp = *head_ref;
    int pos = 1;
    while (temp->next != NULL || pos <= x) {
        if (pos == x){
        	return temp->data;
		}
		pos++;
        temp = temp->next;
    }
    return -1;
}
int main(){
    Node* head = NULL;
    push(&head, 110);
    push(&head, 90);
    push(&head, 17);
    push(&head, 15);
    push(&head, 19);
    push(&head, 12);
    printList(head);
    int X;
    cout << "enter position: " ;
    cin >> X;
    cout << "Number at position "<< X << " is " <<search(&head, X);
    return 0;
}