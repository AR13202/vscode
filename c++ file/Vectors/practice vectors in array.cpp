# include <iostream>
#include <vector>
using namespace std;
int main(){
	vector <int> arr;
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	cout << "Enter numbers: ";
	for (int i=0;i<n;i++){
		int a;
		cin >> a;
		arr.push_back(a);
	}
	cout << "Output: ";
	for (auto i = arr.begin(); i != arr.end(); ++i){
		cout << *i << " ";
	}
	cout << "\nReversed Output: ";
	for (auto i = arr.rbegin(); i != arr.rend(); ++i){
		cout << *i << " ";
	}
	cout << "\nSize: " << arr.size();
	cout << "\nCapacity: " << arr.capacity();
	cout << "\nMax Size: " << arr.max_size();
	arr.resize(6);
	cout << "\nResized array: ";
	for (auto i = arr.begin();i!=arr.end();++i){
		cout << *i <<" ";
	}
	cout << "\nSize: " << arr.size();
	cout << "\nCapacity: " << arr.capacity();
	cout << "\nMax Size: " << arr.max_size();
	if (!arr.empty()){
		cout << "\nVector is not empty" << endl;
	}else {
		cout << "\nVecotr is empty" << endl;
	}
	cout << "Reference operator [arr] : arr[3] = " << arr[3];
    cout << "\nat : arr.at(2) = " << arr.at(2);
    cout << "\nfront() : arr.front() = " << arr.front();
    cout << "\nback() : arr.back() = " << arr.back();
    int* pos = arr.data(); // pointer to first element
    cout << "\nThe first element is " << *pos;
    arr.assign(5, 10);
    cout << "\nNew vector after assigning values: ";
    for (int i = 0; i < arr.size(); i++){
    	cout << arr[i] << " "; 
    }
    int q = arr.size();
    cout << "\nThe last element is: " << arr[q - 1];
	arr.clear();
		if (!arr.empty()){
		cout << "\nVector is not empty after clear()" << endl;
	}else {
		cout << "\nVecotr is empty after clear()" << endl;
	}
	return 0;
}