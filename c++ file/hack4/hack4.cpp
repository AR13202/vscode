#include <bits/stdc++.h>
#include <fstream>
using namespace std;
void addEdge(vector <pair<int,int> > adj[], int u
                ,int v,int wt){
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}
int pathfind2(vector<pair<int,int>> adj[], int a 
                , int b, int w1){
    for(auto it=adj[a].begin();it!=adj[a].end();it++){
        int v = it->first;
        int w = it->second;
        if(v==b){
            return min(w,w1);
        }
    }
    return 0;
}
vector<int> pathfind(vector<pair<int,int>> adj[],int a ,
                    int b){
    vector<int> z;
    for(auto it=adj[a].begin();it!=adj[a].end();it++){
        int v = it->first;
        int w = it->second;
        if(v==b){
            z.push_back(w*2);
        }else{
            int e = pathfind2(adj,v,b,w);
            if(e==0){
                continue;
            }else{
                z.push_back(e);
            }
        }
    }
    return z;
}
int main(){
    ifstream infile;
    ofstream outfile;
    infile.open("input1.txt");
    outfile.open("hack4.txt");
    int data;
    infile>>data;
    int t;
    t=data;
    infile>>data;
    cout<<t<<endl;//1
    for(int _=1;_<=t;_++){
        int n,m,q;
        n = data;
        infile>>data;
        m = data;
        infile>>data;
        q = data;
        infile>>data;
        cout<<n<<" "<<m<<" "<<q<<endl;//2
        vector<pair<int,int>> adj[n+1];
        while(m--){
            int a,b,c;
            a = data;
            infile>>data;
            b = data;
            infile>>data;
            c = data;
            infile>>data;
            cout<<a<<" "<<b<<" "<<c<<endl;//3 
            addEdge(adj,a,b,c);
        }
        vector<int> x;
        while(q--){
            int a,b;
            a = data;
            infile>>data;
            b = data;
            infile>>data;
            cout<<a<<" "<<b<<endl;//4
            vector<int> pq;
            pq = pathfind(adj,a,b);
            if(pq.size()==0){
                x.push_back(0);
			}else{
				int y = 0;
                for(int i=0;i<pq.size();i++){
                    y+= pq[i];
                }
                x.push_back(y);
            }
        }
        outfile<<"Case #"<<_<<": ";
        for(int i=0;i<x.size();i++){
            outfile << x[i]<<" ";
		}
		outfile << endl;
    }
    return 0;
}