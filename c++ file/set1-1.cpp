//set1-01
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> grade;
    vector<string> name;
    map<int,int> m;
    long long int t;
    cout << "enter number of names/grades : ";
    cin>>t;
    while(t--){
        string s;
        int a;
        cout<<"enter name and grade: ";
        cin >>s>>a;
        name.push_back(s);
        grade.push_back(a);
        m[a]++;
    }
    //mean
    int sum=0;
    for(int i=0;i<grade.size();i++){
        sum += grade[i]; 
    }
    cout << "mean of grade is : " << (sum/grade.size());
    //median
    vector<int> grade2 = grade;
    sort(grade2.begin(),grade2.end());
    int a = grade2.size();
    int median = 0;
    if(a%2!=0){
        median = grade2[(a+1)/2];
    }else{
        median = (grade2[a/2]+grade2[(a/2)+1])/2;
    }
    cout<<"\nmedian of grades: " << median << endl;
    //mode
    int freq = 0;
    int key = 0;
    for(auto it:m){
        if(it.second>freq){
            freq = it.second;
            key = it.first;
        }
    }
    cout << "mode of grades : " << key << endl;
    cout<<"students with grade as mode: \n";
    for(int i=0;i<name.size();i++){
        if(grade[i] == key){
            cout <<name[i] << endl;;
        }
    }
    return 0;
}