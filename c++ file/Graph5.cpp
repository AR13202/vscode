// Kruskal's algorithm minimum spanning tree
#include <bits/stdc++.h>
using namespace std;
int parent[20];
int sz[20];
void make_set(int v){
    parent[v] = v;
    sz[v] = 1;
}
int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v] = find_set(parent[v]);
}
void union_set(int a,int b){
    a = find_set(a);
    b = find_set(b);
    if(a != b){
        if(sz[a] < sz[b]){
            parent[a] = b;
            sz[b] += sz[a];
        }else {
            parent[b] = a;
            sz[a] += sz[b];
        }
    }
}
int main(){
    int n,m,u,v,w;
    cin >> n >> m;
    parent[n];
    sz[n];
    for(int i=0;i<n;i++){
        make_set(i);
    }
    vector<vector<int>> edge;
    for(int i=0;i<m;i++){
        cin >> w >> u >> v;
        edge.push_back({w,u,v});
    }
    int cost = 0;
    sort(edge.begin(),edge.end());
    for(auto i:edge){
        int w=i[0];
        int u=i[1];
        int v=i[2]; 
        int x=find_set(u);
        int y=find_set(v);
        if(x==y){
            continue;
        }else{
            parent[v] = u;
            union_set(u,v);
            cost += w;
            cout << u << " " << v << endl;
        }
    }
    cout << "cost: " << cost << endl;
    return 0;
}