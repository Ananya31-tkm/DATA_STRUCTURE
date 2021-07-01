#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,x,y,u,v,n,nofed=1;
int Min,Mincost=0,cost[9][9],Parent[9];
int Find(int);
int Union(int,int);
void main()
{
	
	printf("....Implementation of Kruskal's algorithm....");
	printf("\nEnter the no. of vertices:");
	scanf("%d",&n);
	printf("\nEnter the cost adjacency matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	printf("The edges of Minimum Cost Spanning Tree are\n");
	while(nofed < n)
	{
		for(i=1,Min=999;i<=n;i++)
		{
			for(j=1;j <= n;j++)
			{
				if(cost[i][j] < Min)
				{
					Min=cost[i][j];
					x=u=i;
					y=v=j;
				}
			}
		}
		u=Find(u);
		v=Find(v);
		if(Union(u,v))
		{
			printf("%d edge (%d,%d) =%d\n",nofed++,x,y,Min);
			Mincost +=Min;
		}
		cost[x][y]=cost[y][x]=999;
	}
	printf("\n\tMinimum cost = %d\n",Mincost);
	getch();
}
int Find(int i)
{
	while(Parent[i])
	i=Parent[i];
	return i;
}
int Union(int i,int j)
{
	if(i!=j)
	{
		Parent[j]=i;
		return 1;
	}
	return 0;
}