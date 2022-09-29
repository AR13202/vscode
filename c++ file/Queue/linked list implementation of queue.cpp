#include <bits/stdc++.h>
using namespace std;
struct QNode {
    int data;
    QNode* next;
    QNode(int d){
        data = d;
        next = NULL;
    }
};
struct Queue {
    QNode *front, *rear;
    Queue(){
        front = rear = NULL;
    }
    void enQueue(int x){
        QNode* temp = new QNode(x);
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void deQueue(){
        if (front == NULL){
            return;
        }
        cout << front->data << " is deleted\n";
        QNode* temp = front;
        front = front->next;
        if (front == NULL){
            rear = NULL;
		}
        delete (temp);
    }
    void displayQueue(){
    	if (front==NULL){
    		cout << "Queue is empty\n";
		} else {
			QNode *ptr = front;
			while(ptr !=NULL){
				cout << ptr->data << " ";
				ptr = ptr->next;
			}
		}
	}
};
int main(){
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.displayQueue();
    cout << endl;
    q.deQueue();
    q.deQueue();
    q.displayQueue();
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.displayQueue();
    cout << endl;
    q.deQueue();
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data;
	return 0;
}