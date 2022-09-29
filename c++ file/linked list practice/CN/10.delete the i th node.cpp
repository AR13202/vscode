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
Node *deleteX(Node *head, int y){
	Node * temp = head;
	int count = 0;
	while (count != y-1){
		count++;
		temp = temp->next;
	}
	temp->next = temp->next->next;
	return head;
}
void print(Node *head){
	Node * temp = head;
	int count = 0;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	for (int i = 0;i < t;i++){
		Node *head = takeInput();
		int y;
		cin >> y;
		Node *temp = deleteX(head,y);
		print(temp);
	}
	return 0;
}