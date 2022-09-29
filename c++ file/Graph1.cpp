// BFS
#include <iostream>
#include <queue>
using namespace std;
class graph{
	int n;
	int arr[20][20];
	bool visit[];
	public:
		graph(int n){
			this->n=n;
			arr[n+1][n+1];
			visit[n+1] = {false};
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					arr[i][j] = 0;
				}
			}
		}
		void addEdges(int u,int v){
			arr[u][v] = 1;
			arr[v][u] = 1;
		}
		void displaymatrix(int n){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
		}
		void bfsprint(int v){
			bool visited[n+1]={false};
			queue<int> q;
			q.push(v);
			visited[v] = true;
			while(q.size() !=0){
				int a = q.front();
				cout << a << " ";
				for(int i=1;i<=n;i++){
					if((arr[a][i]==1) && visited[i]==false){
						q.push(i);
						visited[i] = true;
					}
				}
				q.pop();
			}
		}
		void printdfs(int start){
			cout << start << " ";
			visit[start] = true;
			for(int i=1;i<=n;i++){
				if((arr[start][i]==1) && (visit[i]==false)){
					printdfs(i);
				}
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
	cout << "display matrix\n";
	c.displaymatrix(7);
	cout << "bfs: ";
	c.bfsprint(1);
	cout << "\ndfs: ";
	c.printdfs(1);
	return 0;
}
/*
                1
               / \
              3---2
            /  \ /|\
           /    4-5 \
          6----------7
*/