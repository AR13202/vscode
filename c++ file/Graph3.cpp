// topological Sort
#include <bits/stdc++.h>
#include <queue>
using namespace std;
class graph{
    int v;
    list<int>*l;
    int arr[20];
    bool visit[];
    public:
        graph(int v){
            this->v = v;
            l = new list<int>[v+1];
            visit[v+1] = {false};
            arr[v+1];
            for(int i=0;i<=v;i++){
                arr[i] = 0;
            }
        }
        void addEdges(int x,int y){
            l[x].push_back(y);
            arr[y]++;
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
        void topological_sort(){
            queue<int> q;
            for(int i=1;i<=v;i++){
                if(arr[i]==0){
                    q.push(i);
                    visit[i] = true;
                }
            }
            while(q.size() != 0){
                int a = q.front();
                for(int x:l[a]){
                    arr[x]--;
                }
                for(int i=1;i<=v;i++){
                    if(arr[i]==0 && !(visit[i])){
                        q.push(i);
                        visit[i] = true;
                    }
                }
                cout << a << " ";
                q.pop();
            }
        } 
};
int main(){
    graph c(7);
    c.addEdges(1,3);
    c.addEdges(1,4);
    c.addEdges(2,4);
    c.addEdges(2,5);
    c.addEdges(3,6);
    c.addEdges(4,3);
    c.addEdges(4,6);
    c.addEdges(4,7);
    c.addEdges(5,4);
    c.addEdges(5,7);
    c.print();
    cout << "\ntopological sort: ";
    c.topological_sort();
    return 0;
}