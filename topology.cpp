
#include <iostream>
#include<list>

using namespace std;

int adj[10][10],M,indegree[10],j;
void Topological()
{ 
    for(int i = 1; i <= M; i++) 
	{
        indegree[i] = 0; 
		for(int j=0;j<M;j++)
			indegree[i]=indegree[i]+adj[j][i];
	}
cout<<"OUTPUT:\t";
	for(int i=1;i<=M;i++)
    { 
        for(j=1;j<=M;j++)
		{
			if(indegree[j]==0)
			{
				cout<<j<<" \n";
				indegree[j]=-1;
				for(int k=1;k<=M;k++)
				{
					if(adj[j][k]==1)
						indegree[k]=indegree[k]-1;
				}
			}
			
		}
	}
}
int main()
{
	int j,i,S;
	cout<<"enter the number of nodes\n";
	cin>>M;
	cout<<"enter  the adjacency matrix\n";
	for(i=1;i<=M;i++)
		for(j=1;j<=M;j++)
			cin>>adj[i][j];
	Topological();
	cout<<"\n";
	return 0;
}

