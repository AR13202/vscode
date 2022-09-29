#include<iostream>
#include<list> // header file
#include<algorithm> 
using namespace std;
int main(){
    // when we use list it is referred to doubly linked list
    //list <int> l1;//declaration
    list<int> l1 = {1,2,3}; // declaration and initialization
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();++it){
        cout << *it << " ";
    }
    cout << endl;
    l1.push_back(4); // push in last
    l1.push_front(0);//push in front
    l1.push_back(5);
    for(it=l1.begin();it!=l1.end();++it){
        cout << *it << " ";
    }
    cout << endl;
    l1.pop_front(); // pop front element
    l1.pop_back(); // pop last element
    for(it=l1.begin();it!=l1.end();++it){
        cout << *it << " ";
    }
    cout << endl;
    cout << l1.front() << " " <<l1.back() << endl;
    //l1.insert(l1.begin() + 4,6);
    //like +4 with begin in list as element are not stored in contigouos location 
    //l1.clear();//remove all the element from list
    //cout << l1.empty() <<endl; // return bool true for empty list
    l1.reverse();//works with ALGORITHM Header File
    for(it=l1.begin();it!=l1.end();++it){
        cout << *it << " ";
    }
    cout << endl;
    l1.sort(); //works with ALGORITHM Header File
    for(it=l1.begin();it!=l1.end();++it){
        cout << *it << " ";
    }
    cout << endl;
}