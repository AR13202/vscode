#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int v = 0;v<t;v++){
	    string a,b,c, p = "" , q = "";
	    int count=0;
	    cin >> a >> b >> c;
	    string arr1[a.length() + 1];
	    arr1[0] = "";
	    string arr2[b.length() + 1];
	    arr2[0] = "";
	    for (int j = 0;j<a.length();j++){
	        p += a[j];
	        arr1[j+1] = p;
	    }
	    for (int j = 0;j<b.length();j++){
	        q += b[j];
	        arr2[j+1] = q;
	    }
	    for (int j = 0;j<a.length()+1;j++){
	        for (int k = 0;k<b.length()+1;k++){
	        	string h = arr1[j]+arr2[k];
    	        size_t found = c.find(h);
    			if (found != string::npos){
        			count++;
        		}
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
