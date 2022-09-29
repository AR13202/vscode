#include<iostream>
using namespace std;
int main(){
    int x=-1;
    try{
        if(x<0){
            throw x;
            cout << "try blocks\n";
        }
    }
    /*catch(int){
        cout << "int catch blocks\n";
    }
    catch(float){
        cout << "float catch blcoks\n";
    }*/
    catch(...){
        cout << "generic catch blocks\n";
    }
    return 0;
}