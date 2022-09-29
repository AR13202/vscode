#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    map<int,int> a;
    a[0] = 4;
    a.insert({1,2});
    a.insert({4,5});
    map<int,int>::iterator it;
    for(it=a.begin();it!=a.end();it++){
        cout << it->first << " " << it->second 
        << endl;
        //also we can use
        // cout << (*it).first << endl;
    }
    map<int,int> a2(a.begin(),a.end());
    a2.insert({5,6});
    a2.insert({9,8});
    map<int,int>::iterator it2;
    for(it2=a2.begin();it2!=a2.end();++it2){
        cout << (*it2).first << " " << (*it2).second 
        << endl;
    }
    a2 .erase(a2.begin(),a2.find(5));
    map<int,int>::iterator it3;
    for(it3=a2.begin();it3!=a2.end();++it3){
        cout << (*it3).first << " " << (*it3).second 
        << endl;
    }
    map<int,int>::iterator it4;
    for(it4=a.begin();it4!=a.end();++it4){
        cout << (*it4).first << " " << (*it4).second 
        << endl;
    }
    cout << "\n";
}
/*int main()
{
    map<int,int>mp;
    map<int,int>::iterator it;
    mp[4]=10;
    mp[1]=12;
    mp[3]=6;
    mp[2]=5;
    
    //  it = mp.find(5);
    // if(it==mp.end()){
    //     mp.erase(it);
    // }
    // else{
    //     cout<<"Its present";
    // }
    
    for(it=mp.begin();it!=mp.end();it++){       //we can also use auto it : mp 
        cout<<it->first<<" "<<it->second<<endl;     //(*it).first we can use it also
    }
    
    cout<<mp.lower_bound(3)->first<<mp.lower_bound(3)->second<<endl;
    
    return 0;
}*/