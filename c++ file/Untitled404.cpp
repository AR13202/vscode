#include <bits/stdc++.h>
#include<map>
using namespace std;

void abc(int arr[],int n){
  map<int,int> m;
  for(int i=0;i<n;i++){
    m[arr[i]]++;
  }
  map<int,int>::iterator it;
  for(it=m.begin();it!=m.end();++it){
    cout << (*it).first<<" "<<(*it).second << endl;
  }
  /*for(auto x:m){
    int d=0;
    if(x.second.size()>1){
      d = x.second[1]-x.second[0];
    }
    cout << x.first<<" "<<d<<endl;
  }*/
}

int main()
{
  //write your code here
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >>arr[i];
  }
  return 0;
}