#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    string s = "abcdef";
    //1 reverse a string
    cout << s << endl;
    string a=s;
    string c = "";
    for(int i=0;i<a.length();i++){
        c=a[i]+c;
    }
    cout << c << endl;
    //2 replace every letter in it next following character
    string b = s;
    for(int i=0;i<b.length();i++){
        char z = b[i];
        int a = z;
        a++;
        z = char(a);
        b[i]=z;
    }
    cout << b << endl;
    //3 capatalise the first letter of each word each word is separated by a space.
    string q = "abcd efgh ijkl";
    cout << q << endl;
    for(int i=0;i<q.length();i++){
        if(q[i]==' '){
            int j=i;
            j++;
            char z = q[j];
            int a = z;
            a-=32;
            q[j]= char(a);
        }else if(i==0){
            char z = q[i];
            int a = z;
            a-=32;
            q[i]= char(a);
        }
    }
    cout << q <<endl;
    //4 find largest word in a given string
    string w = "asadf asdas qwer asdfer dfe";
    string g = "";
    int space = 0;
    for(int i=0;i<w.length();i++){
        if(w[i]==' '||i==w.length()-1){
            if((i-space)>g.length()){
                g = "";
                if(space>0){
                    space++;
                }
                for(int j=space;j<i;j++){
                    g+=w[j];
                }
            }
            space = i;
        }
    }
    cout << g << endl;
    //5 count all vowels in a string
    string h = "afdfegfgiohguhjaejijokjkuahejhikjou";//vowels==15
    int vowels=0;
    for(int i=0;i<h.length();i++){
        if(h[i]=='a'||h[i]=='e'||h[i]=='i'||h[i]=='o'||
        h[i]=='u'|| h[i]=='A'||h[i]=='E'||h[i]=='I'||h[i]=='O'||h[i]=='U'){
            vowels++;
        }
    }
    cout << vowels << endl;
    //6 create a frequency chart for vowels
    int aa=0,ee=0,ii=0,oo=0,uu=0;
    for(int i=0;i<h.length();i++){
        if(h[i]=='a' || h[i]=='A'){
            aa++;
        }else if(h[i]=='e' || h[i]=='E'){
            ee++;
        }else if(h[i]=='i' || h[i]=='I'){
            ii++;
        }else if(h[i]=='o' || h[i]=='O'){
            oo++;
        }else if(h[i]=='u' || h[i]=='U'){
            uu++;
        }
    }
    cout << "a : " << aa << endl;
    cout << "e : " << ee << endl;
    cout << "i : " << ii << endl;
    cout << "o : " << oo << endl;
    cout << "u : " << uu << endl;
    //7 find whether a string a palindrome or not
    string r = "abcdefgfedcba";
    string rr= "";
    for(int i=0;i<r.length();i++){
        rr=r[i]+ rr;
    }
    if(rr==r){
        cout <<"palindrome " << endl;
    }else{
        cout <<" not a palindrome " << endl;;
    }
    //8 find a word in a given string with highest number of repeated letters
    string p = "abccdcbdvswccjerkaaaaaa"; //c==5 assuming all letter are in lower case
    int arr[26] = {0};
    for(int i=0;i<p.length();i++){
        char qq = p[i];
        int ww = qq;
        arr[ww-97]++;
    }
    int max = 0,index=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max = arr[i];
            index= i;
        }
    }
    cout <<char(index+97) << endl;
    // 9 write a program to change lower to upper and vica-versa
    string hjk = "ASDFGHJqwertyuASDert";
    for(int i=0;i<hjk.length();i++){
        char hi = hjk[i];
        if(hi>=65 && hi<=90){
            int a = hi;
            a+=32;
            hjk[i]= char(a);
        }else if(hi>=97 && hi<=122){
            int a = hi;
            a-=32;
            hjk[i]= char(a);
        }
    }
    cout << hjk << endl;
    //10 write a program to check whether a substring a part of the another string or not.
    string zz = "abcdefghijklmnop";
    string ll = "ijkl";
    int kk=ll.length(),vv=0;
    for(int i=0;i<zz.length();i++){
        string bb="";
        for(int j=i;j<i+kk;j++){
            bb+=zz[j];
        }
        if(bb==ll){
            cout << "a substring\n";
            vv=1;
        }
    }
    if(vv=0){
        cout << "not a substring\n";
    }
}
