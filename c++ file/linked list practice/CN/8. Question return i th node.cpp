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
void print(Node *head, int x){
	Node * temp = head;
	int count = 0;
	while(count != x){
		count++;
		temp = temp->next;
	}
	cout << temp->data <<endl;
}

int main(){
	int t;
	cin >> t;
	for (int i = 0;i < t;i++){
		Node *head = takeInput();
		int x;
		cin >> x;
		print(head,x);
	}
	return 0;
}