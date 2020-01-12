#include<bits/stdc++.h>
using namespace std;
const int MAXV = 1000;
const int INF = 1e7;
int d[MAXV];
void Dijkstra_ajacent_matrix(int s) //
{
	fill(d, d+MAXV, INF);
	d[s] = 0;
	for(int i=0;i<n;i++)
	{
		int u = -1, MIN = INF;
		for(int j=0;j<n;j++)
		{
			if(vis[j]==false && d[j]<MIN)
			{
				MIN = d[j];
				u = j;
			}
		}	
	} 
	if(u==-1) return;
	vis[u] = true;
	for(int v=0;v<n;v++)
	{
		if(vis==false && G[u][v]!=INF &&d[v]>(d[u]+G[u][v]))
		{
			d[v] = d[u]+G[u][v];
		}
	}
}

void Dijkstra_ajacent_table(int s)
{
	
}
int main()
{
	cout<<INF;
	return 0;
}
