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
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}
void print(Node *head){
	Node * temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	cout << count <<endl;
}

int main(){
	int t;
	cin >> t;
	for (int i = 0;i < t;i++){
		Node *head = takeInput();
		print(head);
	}
	return 0;
}