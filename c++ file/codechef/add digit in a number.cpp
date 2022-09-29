#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cout << "enter number: ";
	cin >> a;
	for (int i = 0; i < a; i++){
	    int n;
	    int g = 0;
	    cout << "num: ";
	    cin >> n;
	    string s = to_string(n);
	    for (int j = 0; j < s.length(); j++){
	    	char str1 = s[j];
            g += (int)str1;
            cout << g << endl;
	    }
	    cout << g << endl;
	}
	return 0;
}