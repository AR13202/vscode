# include <iostream>
using namespace std;
class Node {
	public:
		int data;
		Node* next;
};
void printList(Node* n){
	cout << "Linked list: " << endl;
	while(n != NULL){
		cout << n->data <<" ";
		n = n->next;
	}
};
void findprime(Node* n){
	cout << endl;
	cout << "prime numbers in linked list are: " << endl;
	while(n != NULL){
		int p = 1;
		for (int i = 2; i < n->data; i++){
			if (n->data % i==0){
				p = 0;
				break;
			}
		}
		if (p==1){
			cout << n->data << endl;
		}
		p = 1;
		n = n->next;
	}
};

int main() {
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	head->data = 11;
	head->next = second;
	
	second->data = 14;
	second->next = third;
	
	third->data = 17;
	third->next = NULL;
	
	printList(head);
	findprime(head);
	return 0;
}