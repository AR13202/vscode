#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
};
struct Node*head = NULL;
void insert_begin(int new_data){
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = head;
    if(head==NULL){
        head->prev = new_node;
    }
    head = new_node;
}
void insert_end(int new_data){
    struct Node*new_node=new Node;
    new_node->data = new_data;
    new_node->next = NULL;
    struct Node*ptr=head;
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
    ptr->next = new_node;
    new_node->prev=ptr;
}
void insert_middle(int new_data,int position){
    struct Node*new_node=new Node;
    new_node->data = new_data;
    new_node->next = NULL;
    new_node->prev = NULL;
    struct Node*ptr = head;
    for(int i=1;i<position && ptr->next!=NULL;i++){
        if(ptr->next!=NULL){
            ptr=ptr->next;
        }
    }
    new_node->next = ptr->next;
    ptr->next->prev = new_node;
    new_node->prev = ptr;
    ptr->next = new_node;
}
void display(){
    struct Node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data <<endl;
        ptr=ptr->next;
    }
}
void delete_begin(){
    head=head->next;
    head->prev = NULL;
}
void delete_end(){
    struct Node*ptr=head;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next = NULL;
}
void sort(){
    struct Node*ptr=head;
    while(ptr!=NULL){
        struct Node*ptr2=ptr->next;
        while(ptr2!=NULL){
            if(ptr2->data<ptr->data){
                int temp = ptr->data;
                ptr->data=ptr2->data;
                ptr2->data=temp; 
            }
            ptr2=ptr2->next;
        }
        ptr=ptr->next;
    }
}
void delete_mid(int position){
    struct Node*ptr=head;
    for(int i=2;i<position;i++){
        if(ptr->next!=NULL){
            ptr=ptr->next;
        }
    }
    ptr->next->next->prev = ptr;
    ptr->next=ptr->next->next;
}
int count(){
    struct Node*ptr=head;
    int c=0;
    while(ptr!=NULL){
        c++;
        ptr=ptr->next;
    }
    return c;
}
void search(int key){
    struct Node*ptr=head;
    bool flag = false;
    while(ptr!=NULL){
        if(ptr->data == key){
            cout<<"element found\n";
            flag=true;
        }
        ptr=ptr->next;
    }
    if(flag==false){
        cout<<"element not found\n";
    }
}
void display(){
    struct Node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    while (ptr!=NULL){
        cout<<ptr->data << endl;
        ptr=ptr->prev;
    }
    
}
int main(){
    insert_end(1);
    insert_begin(8);
    insert_begin(9);
    insert_begin(10);
    insert_begin(3);
    insert_end(5);
    insert_end(6);
    insert_middle(4,3);
    display();
    cout<<endl;
    cout<<count()<<endl;
    delete_begin();
    delete_end();
    delete_mid(3);
    display();
    search(7);
    sort();
    display();
}