# include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node * next;
	Node *prev;
	Node (int x){
		data = x;
		next = NULL;
		prev = NULL;
	}
};
int main(){
	Node *n1 = new Node(1);
	Node *n2 = new Node(2);
	n1->next = n2;
	n2->prev = n1;
	cout << n1->next->data << endl;
	cout << n2->prev->data;
}