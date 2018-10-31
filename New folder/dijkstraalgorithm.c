#include<stdio.h>
#include<string.h>
#define MAX 10
#define INF 9999
#define NIL -1

int adjacent[MAX][MAX],queue[MAX],set[MAX],weight[MAX][MAX],parent[MAX],distance[MAX],nov,front=0,pr=0,rear;




void enqueue(int item)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow \n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear = rear + 1;
        queue[rear] = item;
        sort();
    }
}

int dequeue()
{
    int item;
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        item = -1;
    }
    else
    {
        item = queue[front];
        queue[front]=777;
        front = front + 1;
    }
    return item;
}



int isEmpty()
{
     if (front == 0)
     {
         return 1;
     }
     return 0;
}

void display();
{

    inti=0;
    for(i=1;i<MAX-1;i++)
    {
        printf("%d\t",queue[i]);
    }

}
void sort()
{
    int i,j,temp;
    for(i=1;i<MAX-1;i++)
    {
        for(j=0;j<MAX-1;j++)
        {
            if(queue[j]>queue[j+1])
            {
                temp=queue[j];
                queue[j]=queue[j+1];
                queue[j+1]=temp;
            }
        }

    }

}

void INITIALIZE_SINGLE_SOURCE(int source)
{
    int i;
    for (i=0;i<nov;i++)
    {
        distance[i]=INF;
        parent[i]=NIL;

    }
    distance[source]=0;
}
void RELAX(int u, int v, int w)
{
    if (distance[v]>(distance[u]+weight[u][v]))
    {
        distance[v] = distance[u]+weight[u][v];
        parent[v]=u;
    }

}

DIJKSTRA(int s)
{
    INITIALIZE_SINGLE_SOURCE(s);
    int i;
    for(i=0;i<nov;i++){
        queue[i]=i;
        front++;
    }
    while(!isEmpty())
    {
        int u,i;

        for(i=0;i<nov;i++)
        {
            if(adjacent[u][i]==1)
            {
                RELAX(u,i,weight[u][i]);
            }
        }
    }

}

int main()
{
    int i;
    for(i=0;i<MAX;i++)
    {
        queue[i]=999;
    }

    enqueue(5);
    enqueue(3);
    enqueue(10);
    enqueue(7);
    display();
    dequeue();




    printinfo();

    return 0;
}
