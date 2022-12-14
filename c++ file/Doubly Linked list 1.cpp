# include <iostream>
using namespace std;
struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
};
struct Node *head = NULL;
void insert(int newdata) {
	struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
	newnode->data = newdata;
	newnode->prev = NULL;
	newnode->next = head;
	if (head != NULL){
		head->prev = newnode;
	}
	head = newnode;
}
void display() {
	struct Node* ptr;
	ptr = head;
	while (ptr != NULL) {
		cout << ptr->data << " <==>";
		ptr = ptr->next;
	}
	cout<< "NULL"; 
}
int main(){
	insert(31);
	insert(18);
	insert(74);
	insert(26);
	insert(91);
	cout << "The doubly linked list is " << endl;
	display();
	return 0;
}