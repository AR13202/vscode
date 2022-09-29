#include<iostream>
#include<array>
using namespace std;
// it is a container that encapsulates fixed size array
int main(){
    /*
    int n;
    cin >> n;
    */
    array<int,5> arr; // cannot input length of array
    // array size needed atcompile time
    arr = {1,2,3,4,5};
    //access elements
    cout << arr.at(2) << endl;
    cout << arr[2] << endl; // works same as at();
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    cout << arr.data() << endl; // return pointer to array
    return 0;
}