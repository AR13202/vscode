/*PRIM'S ALGORITHM minimum spanning tree*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define V 6
int selectMinVertex(vector<int>& value,vector<bool> &setMST){
    int minimum=INT_MAX;
    int vertex;
    for(int i=0;i<V;i++){
        if(setMST[i]==false && value[i]<minimum){
            vertex=i;
            minimum=value[i];
        }
    }
    return vertex;    
}
void findMST(int graph[V][V]){
    int parent [V];
    vector <int> value(V, INT_MAX);
    vector<bool> setMST(V,false);
    parent[0] = -1;
    value[0] = 0;
    for(int i=0;i<V-1;++i){
        int u=selectMinVertex(value,setMST);
        setMST[u] = true;
        for(int j=0;j<V;++j){
            if(graph[u][j]!=0 && setMST[j]==false && graph[u][j]<value[j]){
                value[j]=graph[u][j];
                parent[j] = u;
            }
        }
    }
    for(int i=1;i<V;++i){
        cout << "U->V : " << parent[i] << " -->" << i << endl;
    }
}
int main(){
    int graph[V][V] =  {{0,4,6,0,0,0},
                        {0,4,6,3,4,0},
                        {6,6,0,1,8,0},
                        {0,3,1,0,2,3},
                        {0,4,8,2,0,7},
                        {0,0,0,3,7,0}};
    findMST(graph);
    return 0;
}