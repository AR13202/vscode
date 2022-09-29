#include<iostream>
using namespace std;
template <typename T>
class Node {
    public:
    T data;
    Node<T> *next = NULL;
    Node(T x){
        data = x;
        next = NULL;
    }
};
template <typename T>
class Stackusingll{
    Node<T> *head;
    int s;
    public:
        Stackusingll(){
            Node<T> *head = NULL;
            s = 0;
        }
        Node<T> *push(int m){
            Node<T> *n = new Node<T>(m);
            n->next = head;
            head = n;
            s++;
            return head;
        }
        T top(){
            if (isEmpty()){
                return 0;
            }
            return head->data;
        }
        T size(){
            return s;
        }
        bool isEmpty(){
            return s == 0;
        }
        Node<T> *pop(){
            if (isEmpty()){
                return 0;
            }
            cout << head->data << endl;
            s--;
            head = head->next;
            return head;
        }
};
int main(){
    Stackusingll<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;
    s.pop();
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
    cout << s.top() << endl;
    s.pop();
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
    cout << s.isEmpty() << endl;
    return 0;
}