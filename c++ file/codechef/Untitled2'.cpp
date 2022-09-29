#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for (int i = 0;i<t;i++){
		int n,d,c,m;
		cin >> n >> d >> c >> m;
		string s;
		cin >> s;
		for (int j = 0;j<n;j++){
			if (s[j]=='D' && d > 0){
				d--;
				c += m;
			} else if (s[j] == 'C' && c > 0){
				c--;
			}
		}
		if (d >= 0){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}