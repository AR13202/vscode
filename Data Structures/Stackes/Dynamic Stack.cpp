/* to remove size constraint on stack using array we use dynamic array
here we are describing the initial size as 4(e.g) and doubles it we limit exceeds*/
#include <iostream>
#include <climits>
using namespace std;
class StackusingArray {
	int *data;
	int nextIndex;
	int capacity;
	public:
		StackusingArray(){
			data = new int[4];
			nextIndex = 0;
			capacity = 4;
		}
		int size(){
			return nextIndex;
		}
		bool isEmpty(){
		/*	if (nextIndex == 0){
				return 0;
			}
			else{
				return false;
			} 
		*/
			return nextIndex == 0;
		}
		void push(int element){
			if (nextIndex == capacity){
                int *neData = new int[2 *capacity];
                for (int i = 0;i < capacity; i++){
                    neData[i] = data[i];
                }
                capacity *= 2;
                delete [] data;
                data = neData;
				// cout << "Stack full" << endl;
				// return;
			}
			data[nextIndex] = element;
			nextIndex++; 
		}
		int pop(){
			if (isEmpty()){
				cout << "Stack is Empty" << endl;
				return INT_MIN;
			}
			nextIndex--;
			return data[nextIndex];
		}
		int top(){
			if (isEmpty()){
				cout << "Stack is Empty" << endl;
				return INT_MIN;
			}
			return data[nextIndex - 1];
		}
};
int main(){
	StackusingArray	s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout << s.top() << endl;
	
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	
	cout << s.size() << endl;
	
	cout << s.isEmpty() << endl;
	return 0;
}