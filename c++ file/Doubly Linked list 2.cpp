#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
void push(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL){
        (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
}
void printList(struct Node* node){
    struct Node* last;
    cout << "In forward direction: " << endl;
    while (node != NULL) {
        cout << node->data << " ";
        last = node;
        node = node->next;
    }
    cout << endl;
    cout << "In reverse direction: " << endl;
    while (last != NULL) {
        cout << last->data << " ";
        last = last->prev;
    }
}
int main(){
    struct Node* head = NULL;
    push(&head, 17);
    push(&head, 10);
    push(&head, 84);
    push(&head, 85);
    push(&head, 104);
    printList(head);
    return 0;
}