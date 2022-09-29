# include <iostream>
# include "LL.cpp"
using namespace std;
Node *takeInput(){
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1){
		Node *n1 = new Node(data);
		if (head == NULL){
			head = n1;
			tail = n1;
		}
		else {
			tail->next = n1;
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}
void reverse(Node *head){
	Node *temp = head;
	if (temp->next == NULL){
	 int a = temp->data;
		cout << a << " ";
	}
	else{
		reverse(temp->next);
		cout << temp->data << " ";
	}
	           
}                   
int main(){	 
	Node * head = takeInput();
	reverse(head);
	return 0;
}