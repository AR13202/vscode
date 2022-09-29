#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int data;
    //read mode
    ifstream infile;
    infile.open("a.txt");
    //write mode
    ofstream outfile;
    outfile.open("b.txt");
    cout << "reading a file\n";
    int t;
    infile>>t;
    while(t--){
        int a ,b;
        infile>>a>>b;
        cout << "writing to the file\n";
        outfile << "a = " << a << endl;
        outfile << "b = " << b << endl;
        outfile << "a+b= " << a+b << endl;
    }
    infile.close();
    cout << "end reached\n";

    return 0;
}