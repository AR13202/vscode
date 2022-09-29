#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
Node *takeInput(int t){
    int n;
    cin >>n;
    Node *head = NULL;
    Node *tail = NULL;
    while(t--){
        Node *n1 = new Node(n);
        if(head == NULL){
            head = n1;
            tail = n1;
        }
        else {
            tail -> next = n1;
			tail = n1; 
        }
        cin >> n;
    }
    return head;
}
void print(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
vector<int> deletell(Node*head){
    Node*temp = head;
    vector<int> arr;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return arr;
}
vector<int> removezero(vector<int>arr){
    vector<int> arr2;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr2.push_back(arr[i]);
        }
    }
    return arr2;
}
int intsum(vector<int> arr,int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=arr[i];
    }
    return sum;
}
bool findsame(vector<int> arr,int a){
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            int b = intsum(arr,i,j);
            if(abs(b)==abs(a)){
                return true;
            }
        }
    }
    return false;
}
vector<int> addele(vector<int> arr1,vector<int> arr2,int a,int b){
    for(int i=a;i<=b;i++){
        arr2.push_back(arr1[i]);
    }
    return arr2;
}
vector<int> remzero(vector<int> arr1,vector<int> arr2,vector<int> arr3){
    for(int i=0;i<arr1.size();i++){
        for(int j=i;j<arr1.size();j++){
            int a = intsum(arr1,i,j);
            if(!findsame(arr2,a)){
                arr3 = addele(arr1,arr3,i,j);
            }
        }
    }
    return arr3;
}
vector<int> sep(vector<int>arr){
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            arr1.push_back(arr[i]);
        }else{
            arr2.push_back(arr[i]);
        }
    }
    vector<int> arr3;
    arr3 = remzero(arr1,arr2,arr3);
    arr3 = remzero(arr2,arr1,arr3);
    return arr3;
}
void printarr(vector<int> arr){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout <<arr[i] << " ";
    }
}
int main(){
    int n;
    cin >>n;
    Node *head=takeInput(n);
    vector<int> arr = deletell(head);
    sort(arr.begin(),arr.end());
    arr = sep(arr);
    printarr(arr);
    return 0;
}