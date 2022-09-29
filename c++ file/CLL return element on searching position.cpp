#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
struct Node* head = NULL;
void insert(int newdata){
	struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
	struct Node *ptr = head;
	newnode->data = newdata;
	newnode->next = head;
	if (head != NULL){
		while(ptr->next != head){
			ptr = ptr->next;
		}
		ptr->next = newnode;
	}
	else {
		newnode->next = newnode;
		head = newnode;
	}
}
int search(Node** head_ref, int x){
	Node* temp = *head_ref;
	int pos = 1;
	while (pos <= x && temp->next != NULL){
		if (pos == x){
			return temp->data;
		}	
		pos++;
		temp = temp->next;
	}
	if(temp->data != x){
		cout << "position not found";
		return -1;
	}
	return 0;
}
void display(){
	struct Node* ptr;
	ptr = head;
	do {
		cout << ptr->data << " ";
		ptr = ptr->next;
	}while(ptr != head);
	cout << endl;
}
int main(){
	int x ;
	insert(10);
	insert(3);
	insert(2);
	insert(7);
	insert(9);
	insert(8);
	cout << "The circular linked list is: ";
	display();
	cout << "enter the postion: ";
	cin >> x;
	cout << "data at given postion is = " << search(&head,x);
	return 0;
}