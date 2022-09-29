#include <bits/stdc++.h>
using namespace std;

void addEdge(vector <pair<int, int> > adj[], int u,int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}
int pathfind2(vector<pair<int,int>> adj[],int a ,int b,int w1){
    for(auto it=adj[a].begin();it!=adj[a].end();it++){
        int v = it->first;
        int w = it->second;
        if(v==b){
            return min(w,w1);
        }
    }
    return 0;
}
vector<int> pathfind(vector<pair<int,int>> adj[],int a ,int b,vector<int> z){
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
    int t;
    cin >> t;
    for(int _=1;_<=t;_++){
        int n,m,q;
        cin >> n >> m >> q;
        vector<pair<int,int>> adj[n+1];
        while(m--){
            int a,b;
            unsigned int c;
            cin >> a >> b >> c;
            addEdge(adj,a,b,c);
        }
        vector<int> x;
        while(q--){
            int a,b;
            cin >> a >> b;
            vector<int> z;
            z = pathfind(adj,a,b,z);
            if(z.size()==0){
                x.push_back(0);
			}else{
				int y = 0;
                for(int i=0;i<z.size();i++){
                    y+= z[i];
                }
                x.push_back(y);
            }
        }
        cout<<"Case #"<<_<<": ";
        for(int i=0;i<x.size();i++){
            cout << x[i]<<" ";
		}
		cout << endl;
    }
}