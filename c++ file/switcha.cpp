#include <iostream>
using namespace std;
int main(){
	char a;
	cin >> a;
	switch(a){
		case 'v':
			cout << "voilet\n";
			break;
		case 'i':
			cout << "Indigo\n";
			break;
		case 'b':
			cout << "Blue\n";
			break;
		case 'g':
			cout << "Green\n";
			break;
		case 'y':
			cout << "Yellow\n";
			break;
		case 'o':
			cout << "Orange\n";
			break;
		case 'r':
			cout << "Red\n";
		default:
			cout << "invalid character\n";
	}
}