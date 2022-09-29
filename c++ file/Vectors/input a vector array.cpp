# include <iostream>
# include <vector>
using namespace std;
int main(){
	vector <int> arr;
	int n;
	cout << "Enter array size: ";
	cin >> n;
	for (int i =0;i<n;i++){
		int a;
		cin >> a;
		arr.push_back(a);
	}
	cout << "Output of begin and end: ";
    for (auto i = arr.begin(); i != arr.end(); ++i)
        cout << *i << " ";
    return 0;
}