# include <iostream>
# include "LL.cpp"
using namespace std;
Node *takeInput(){
	int data;
	cin >> data;
	Node * head = NULL;
	while (data != -1){
		Node *n1 = new Node(data);
		if (head == NULL){
			head = n1;
		}
		else {
			Node *temp = head;
			while (temp->next != NULL){
				temp = temp->next;
			}
			temp->next = n1;
		}
		cin >> data;
	}
	return head;
}
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