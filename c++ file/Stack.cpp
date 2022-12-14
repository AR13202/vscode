#include <iostream>
using namespace std;
struct Node {
	int data;
	struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
	struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
	newnode->data = val;
	newnode->next = top;
	top = newnode;
}
void pop() {
	struct Node* ptr;
	if(top==NULL){
		cout << "stack is empty";
	} else {
		ptr = top;
		cout << "The popped element is " << top->data << endl;
		top = top->next;
	}
}
void display(){
	struct Node* ptr;
	if(top==NULL){
		cout << "Stack is empty";
	} else {
		ptr = top;
		cout << "Stack element are: ";
		while (ptr != NULL){
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
	cout << endl;
}
int main(){
	int ch, val;
	cout << "1) Push in Stack" << endl;
	cout << "2) Pop in Stack" << endl;
	cout << "3) Display Stack" << endl;
	cout << "4) Exit" << endl;
	do {
		cout << "enter choice: " << endl;
		cin >> ch;
		switch(ch){
			case 1: {
				cout << "Enter value to be pushed:" << endl;
				cin >> val;
				push(val);
				break;
			}
			case 2: {
				pop();
				break;
			}
			case 3: {
				display();
				break;
			}
			case 4: {
				cout << "Exit" << endl;
				break;
			}
		}
	}while(ch != 4);
	return 0;
}
