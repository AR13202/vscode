#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}; 
struct Node*head = NULL;
void insert_begin(int newdata){
    struct Node*new_node=new Node;
    struct Node*ptr=head;
    new_node->data = newdata;
    new_node->next = head;
    if(head==NULL){
        while(ptr!=NULL){
            ptr=ptr->next;
            ptr->next=new_node;
        }
    }else{    
        new_node->next=head;
        head = new_node;
    }
}
void insert_end(int data){
    struct Node*new_node=new Node;
    struct Node*ptr=head;
}
void display(){
    struct Node*ptr=head;
    do{
        cout<<ptr->data <<endl;
        ptr=ptr->next;
    }while(ptr!=head);
}
//1 2 3
int main(){
    insert_begin(8);
    insert_begin(9);
    insert_begin(10);
    insert_begin(3);
    display();
}