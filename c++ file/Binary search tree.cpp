# include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data){
        this->data = data;
        left = right =  NULL;
    }
};
bool ifNodExists(struct Node *node,int key){
	if (node == NULL){
		return false;
	}
	if (node->data==key){
		return true;
	}
	bool res1 = ifNodExists(node->left,key);
	if(res1) return true;
	bool res2 = ifNodExists(node->right,key);
	return res2;
}
int main(){
	struct Node* root = new Node(0);
	root->left = new Node(1);
	root->left->left = new Node(3);
	root->left->left->left = new Node(7);
	root->left->right = new Node(4);
	root->left->right->left = new Node(8);
	root->left->right->right = new Node(9);
	root->right = new Node(1);
	root->right->right = new Node(2);
	root->right->left = new Node(5);
	int n;
	cin >> n;
	if (ifNodExists(root,n)){
		cout << "YES";
	} else {
		cout << "NO";
	}
}
