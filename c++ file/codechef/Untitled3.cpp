#include <bits/stdc++.h>
#include <string>
using namespace std;
int sub(string a,string b,string c){
     string p = "",q = "";
	int count=1,z=b.length();
	string arr1[a.length()];
	string arr2[b.length()];
	for (int j = 0;j<a.length();j++){
        p += a[j];
        size_t f = c.find(p);
    	if (f != string::npos){
        	count++;
        }
	    for (int k = 0;k<b.length();k++){
            q += b[k];
            size_t fo = c.find(q);
    		if (fo != string::npos && z > 0){
        		count++;
        	}
    	    size_t found = c.find(p+q);
    		if (found != string::npos){
        		count++;
        	}
        	z--;
	    }
	    q = "";
	}
	return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	int t;
	cin >> t;
	for (int v = 0;v<t;v++){
		string a,b,c;
		cin >> a >> b >> c;
	    cout << sub(a,b,c) << endl;
	}
	return 0;
}