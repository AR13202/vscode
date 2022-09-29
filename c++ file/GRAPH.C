#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 20
typedef enum {false,true} bool;
int adj[MAX][MAX];
bool visited[MAX];
int n;

void create_graph()
{
	int i,max_edges,origin,destin;
	printf("Enter number of nodes:");
	scanf("%d",&n);
	//max_edges=n*(n-1);

	for(i=1;i<=MAX;i++)
	{
		printf("Enter edge %d (0 0 to quit):",i);
		scanf("%d%d", &origin,&destin);

		if((origin==0)&&(destin==0))
		break;
		if(origin>n||destin>n||origin<=0||destin<=0)
		{
			printf("Invalid edge!\n");
			i--;
		}
		else
		{
			adj[origin][destin]=1;
		}
	}
}

void display()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		printf("%4d",adj[i][j]);
		printf("\n");
	}
}

void dfs(int v)
{
	int i,stack[MAX],top=-1,top_v,j,t;
	int ch;
	top++;
	stack[top]=v;
	while(top>=0)
	{
		top_v=stack[top];
		top--;   /*pop form stack */
		if(visited[top_v]==false)
		{
			printf("%d",top_v);
			visited[top_v]=true;
	}
	else
	continue;

	for(i=n;i>=1;i--)
	{
		if(adj[top_v][i]==1&&visited[i]==false)
		{
			top++;  /* push all unvisited neighbours of pop_v */
			stack[top]=i;
		}
	}
}
}

void bfs(int v)
{
	int i,front,rear;
	int que[20];
	front=rear=-1;
	printf("%d",v);
	visited[v]=true;
	rear++;
	front++;
	que[rear]=v;

	while(front<=rear)
	{
		v=que[front]; /*delete from queue */
		front++;
		for(i=1;i<=n;i++)
		{
			/* check for adjacent unvisited nodes */
			if(adj[v][i]==1&&visited[i]==false)
			{
				printf("%d",i);
				visited[i]=true;
				rear++;
				que[rear]=i;
			}
		}
	}
}

 void main()
{
	int i,v,choice;
	clrscr();
	create_graph();
	while(1)
	{
		printf("\n");
		printf("1. Adjacency matrix\n");
		printf("2. DFS using Stack\n");
		printf("3. BFS\n");
		printf("4. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("Adjacency Matrix\n");
				display();
				break;
			case 2:
				printf("Enter starting node for DFS");
				scanf("%d",&v);
				for(i=1;i<=n;i++)
				visited[i]=false;
				dfs(v);
				break;
			case 3:
				printf("Enter starting node for BFS");
				scanf("%d",&v);
				for(i=1;i<=n;i++)
				visited[i]=false;
				bfs(v);
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice\n");
				break;
		}
	}

//getch();
}
