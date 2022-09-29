#include<iostream>
using namespace std;
int main()
{
    
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i=0;
        int count=0;
        while(i<n){
            int counta=0,countb=0;
            if(s[i]=='a'){
                counta++;
            }else{
                countb++;
            }
            if(s[i+1]=='a'){
                counta++;
            }else{
                countb++;
            }
            if(counta!=countb){
                count++;
                if(counta>countb){
                    s[i] = 'b';
                }else{
                    s[i]='a';
                }
            }
            i+=2;
        }
        cout << count << endl << s << endl;
}