#include<iostream>
#include<vector>
using namespace std;
//sequence container and also known as Dynamic array or array list
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(7);
    cout << arr.size() << " " << arr.capacity() << endl;
    cout << arr.front() << endl;
    arr.pop_back();//pop last element
    cout << arr.size() << " " << arr.capacity() << endl;
    cout << arr.front() << endl;
    return 0;
}