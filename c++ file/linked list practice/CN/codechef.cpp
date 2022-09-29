# include <bits/stdc++.h>
using namespace std;
class Node{
    public:
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};
Node *takeInput(int n){
	int data;
	cin >> data;
	Node * head = NULL;
	Node *tail = NULL;
	int i = 0;
	while (i < n){
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
		i++;
	}
	return head;
}
Node *newnode(Node*head,int l){
	Node *temp1 = NULL;
	Node *temp2 = NULL;
	while (head != NULL){
		if (abs(head->data - head->next->data) <= 1){
			int d = head->data + head->next->data;
			Node *n1 = new Node(d);
			if (temp1 == NULL){
				temp1 = n1;
				temp2 = n1;
			}
			else {
				temp2 -> next = n1;
				temp2 = n1;
			}
		}
		head = head->next->next;
	}
	return temp1;
}
int check(Node *head,int l){
	if (l<=2){
		if (abs(head->data - head->next->data) <= 1){
			return 1;
		} else {
			return 0;
		}
	}
	Node *head1 = newnode(head,l);
	return check(head1,l/2);
}
int main(){
	int t;
	cin >> t;
	for (int m = 0;m<t;m++){
		int n;
		cin >> n;
		int l = pow(2,n);
		Node *head = takeInput(l);
		int a = check(head,l);
		if (a==1){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}