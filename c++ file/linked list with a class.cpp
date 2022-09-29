# include <iostream>
using namespce std;
class node {
	public:
		int info;
		node *next;
};
class linked_list {
	node *start;
	public:
		linked_list(){
			start = NULL;
		}
	void create_li();
	void show();
	
	void insert_beg(int num);
};

void linked_list::create_li(){
	int num;
	node *new_node;
	cout << "enter the number"<<endl;
	cin >> num;
	
	while (num != -1){
		new_node = new node;
		new_node->info = num;
		new_node->next = start;
		start = new_node;
		cin >> num;
	}
}

void linked_list::insert_beg(int num) {
	node *new_node;
	new_node = new node;
	new_node -> info = num;
	new_node->next = start;
	start = new_node;
}
void liked_list::show() {
	node *ptr;
	ptr = start;
	cout << "------displaying list------" << endl;
	while (ptr != NULL) {
		cout << ptr
	}
}