#include <bits/stdc++.h>
using namespace std;
class solution{
    int n;
    list<int>*l;
    public:
        solution(int n){
            this->n = n;
            l = new list<int>[n+1];
        }
        void addEdges(int x,int y){
            l[x].push_back(y);
            l[y].push_back(x);
        }
        void networkDelayTime(vector<vector<int>> t, int n, int k) {
            for(int i=0;i<n;i++){
                int m = t[i][1];
                int a = t[i][0];
                addEdges(a,m);
            }
        }
        void print(){
            for(int i=1;i<=n;i++){
                cout << "vertex " << i << "->";
                for(int x: l[i]){
                    cout << x << " ";
                }
                cout << endl;
            }
        }
};
int main(){
    vector<vector<int>> times ={{2,1,1},{2,3,1},{3,4,1}};
    int  n = 4, k = 2;
    solution c(n);
    c.networkDelayTime(times,n,k);
    c.print();
    return 0;
}