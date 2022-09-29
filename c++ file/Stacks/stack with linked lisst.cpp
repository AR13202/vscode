#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next = NULL;
    Node(int x){
        data = x;
        next = NULL;
    }
};
class Stackusingll{
    Node *head;
    int s;
    public:
        Stackusingll(){
            Node *head = NULL;
            s = 0;
        }
        Node *push(int m){
            Node *n = new Node(m);
            if (head == NULL){
                head = n;
                s++;
            }
            else {
                n->next = head;
                head = n;
                s++;
            }
            return head;
        }
        int top(){
            return head->data;
        }
        int size(){
            return s;
        }
        bool isEmpty(){
            return s == 0;
        }
        Node *pop(){
            if (s == 0){
                return 0;
            }
            cout << head->data << endl;
            s--;
            head = head->next;
            return head;
        }
};
int main(){
    Stackusingll s;
    int t;
    cin >> t;
    for (int i = 0;i<t;i++){
	    int a;
	    cin >> a;
	    switch(a){
	    	case 1:
	    		int m;
	    		cin >> m;
	    		s.push(m);
	    		break;
	    	case 2:
	    		s.pop();
	    		break;
	    	case 3:
	    		cout << s.top() << endl;
	    		break;
	    	case 4:
	    		cout << s.size() << endl;
	    		break;
	    	case 5:
	    		cout << (s.isEmpty()==1) << endl;
	    		break;
	    	default:
	    		cout << "enter valid number" << endl;
	    		break;
		}
	}
    return 0;

}