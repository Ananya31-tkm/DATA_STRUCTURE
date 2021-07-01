#include<stdio.h>

int top=-1,queue[20],stack[20],front=-1,rear=-1,arr[20][20],visited[20]={0};
void add(int item);
void BFS(int s,int n);
void DFS(int s,int n);
void Push(int item);
int Pop();
int delete();

void main()
{
int i,j,n,choice,s;

printf("Enter the Number of Vertices:");
scanf("%d",&n);

printf("\nEnter adjacency matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);

        }
    }
printf("Enter Choice 1.BFS 2.DFS");
scanf("%d",&choice);
printf("Enter stating vertex:");
scanf("%d",&s);
while(choice!=3)
{
switch(choice)
{
case 1:BFS(s,n);
break;
case 2:DFS(s,n);
break;
}
printf("\nEnter Choice 1.BFS 2.DFS \n");
scanf("%d",&choice);
for(i=0;i<=n;i++){visited[i]=0;}
}
}


void add(int item)
    {
        if(rear==19)
            printf("QUEUE IS FULL...");
        else
            {
              if(rear==-1)
                    {
                        queue[++rear] = item;
                        front++;
                    }
                else
                    queue[++rear]=item;
            }
    }

int delete()
{
    int k;
 
    if ((front>rear)||(front==-1))
        return (0);
    else
        {
          k=queue[front++];
            return(k);
        }
}


void Push( int item )
{
    if ( top == 19 )
        printf( "Stack OVERFLOW..... " );
    else
        stack[ ++top ] = item;
}
 
int Pop()
{
    int k;
 
    if ( top == -1 )
        return ( 0 );
    else
        {
            k = stack[ top-- ];
            return ( k );
        }
}

void BFS(int s,int n)
{
int i,p;
add(s);
visited[s]=1;
p=delete();
if(p!=0) printf("%d ",p);
while(p!=0)
{
for(i=1;i<=n;i++)
{
if((arr[p][i]!=0)&&(visited[i]==0))
{
add(i);
visited[i]=1;
}
}
p=delete();
if(p!=0) printf("%d ",p);
}
for(i=1;i<=n;i++)
{
if(visited[i]==0) BFS(i,n);
}
}

 void DFS(int s,int n)
{
int k,i;
Push(s);
visited[s]=1;
k=Pop();
if(k!=0) printf("%d ",k);

while(k!=0)
{
for(i=1;i<=n;i++)
{
if((arr[k][i]!=0)&&(visited[i]==0))
{
Push(i);
visited[i]=1;
}
k=Pop();
if(k!=0) printf("%d ",k);
}
}
for(i=1;i<=n;i++){
if(visited[i]==0) DFS(i,n);
}
}
