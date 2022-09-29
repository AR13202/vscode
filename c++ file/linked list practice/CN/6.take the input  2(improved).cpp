# include <iostream>
# include "LL.cpp"
using namespace std;
Node *takeInput(){
	int data;
	cin >> data;
	Node * head = NULL;
	Node *tail = NULL;
	while (data != -1){
		Node *n1 = new Node(data);
		if (head == NULL){
			head = n1;
			tail = n1;
		}
		else {
			tail -> next = n1;
			tail = n1;
		}
		cin >> data;
	}
	return head;
} // now the time complexity of this fxn is O(n) i.e degree of 1;
void print(Node *head){
	Node * temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main(){
	Node *head = takeInput();
	print(head);
	return 0;
}