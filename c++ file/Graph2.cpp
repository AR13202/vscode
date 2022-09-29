// DFS
#include <bits/stdc++.h>
#include <queue>
using namespace std;
class graph{
    int v;
    list<int>*l;
    bool visit[];
    public:
        graph(int v){
            this->v = v;
            l = new list<int>[v+1];
            visit[v+1] = {false};
        }
        void addEdges(int x,int y){
            l[x].push_back(y);
            l[y].push_back(x);
        }
        void print(){
            for(int i=1;i<=v;i++){
                cout << "vertex " << i << "->";
                for(int x: l[i]){
                    cout << x << " ";
                }
                cout << endl;
            }
        }
        void printbfs(int start){
            queue<int> q;
            bool arr[v+1] = {false};
            arr[start] = true;
            q.push(start);
            while(q.size() != 0){
                int a = q.front();
                for(int x:l[a]){
                    if(arr[x] == false){
                        q.push(x);
                        arr[x] = true;
                    }
                }
                cout << a << " ";
                q.pop();
            }
        }
        void dfsprint(int start){
            cout << start << " ";
            visit[start] = true;
            for(int x:l[start]){
                if(visit[x]){
                    continue;
                }
                dfsprint(x);
            }
        }
};
int main(){
    graph c(7);
    c.addEdges(1,2);
    c.addEdges(1,3);
    c.addEdges(2,3);
    c.addEdges(2,4);
    c.addEdges(2,5);
    c.addEdges(2,7);
    c.addEdges(3,4);
    c.addEdges(3,6);
    c.addEdges(4,5);
    c.addEdges(6,7);
    c.print();
    cout << "\nbfs: ";
    c.printbfs(1);
    cout << "\ndfs: ";
    c.dfsprint(1);
    return 0;
}