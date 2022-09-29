#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int x,y,z;
        cin >> x >> y >> z;
        double r = x;
        double a = x*y;
        double b = a/z;
        float area = (22*((r*r)+(a*a)+(b*b)))/7;
        cout << "Case #" << i << ": " << area << endl;
    }
}