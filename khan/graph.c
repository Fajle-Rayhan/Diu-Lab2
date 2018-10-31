#include<stdio.h>
#define MAX 10
#define INF 9999
#define NIL -1
int adjacent[MAX][MAX],queue[MAX],parent[MAX],distance[MAX],front,rear,nov;
char Color[MAX][15];
void enqueue(int item)

    if (rear == MAX - 1)
    {

        prinf("Queue Overflow \n");
    }else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear = rear +1;
        queue[rear] = item;
    }


int dequeue()
{
    int item;
    if(front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        item = -1;
    }
    else
    {
        item = queue[front];
        front = front + 1;
    }
    return item;
}
int isEmpty()
{

    if(front == - 1 || front > rear)
    {
        return 1;
    }

    return 0;
}



void BFS(int source)
{
    int i;
    for (i=0; i < nov; i++)
    {
        if(i!=source)
        {
            strcpy(color[i],"White");
            distance[i]=INF
            parent[i]= NIL
        }
        {

            strcpy(color[i],"White");
            distance[i]=INF
            parent[i]= NIL

            enqueu(source);

            while(!isEmpty())
            {
                u = dequeue();
                for(i=0; i < nov; i++)
                {
                    if(adjacent[u][i]==1)
                    {
                        if(strcmp(Color[i],"white")==0)
                        {
            strcpy(color[i],"Gray");
            distance[i]=INF
            parent[i]= NIL
                        }
                    }
                }
                strcpy(Color[u],"Black")
            }
        }

        void printinfo()
        {
            int i;
            printf("("========parants========");
             for(i=0; i < nov; i++)
            {
                printf("%d\t",parent[i]);
            }
            printf("("========distance========");
             for(i=0; i < nov; i++)
            {
                printf("%d\t",distance[i]);
            }
            printf("("========Color========");
            for(i=0; i < nov; i++)
            {
                printf("%d\t",Color[i]);
            }

        }


    }



}

int main()
{
    int nov,i,j;
    printf("Enter Number of Vertex:");
    scanf("%d",&nov);

    printf("Enter 1 if it is adjacent to next or enter 0");
    for(i=0; i<nov; i++)
    {
        for(j=0; j<nov; j++)
        {

            printf("Adjacency between %d and %d",i,j);
            scanf("%d",&adjacent[i][j]);
        }
    }

    for(i=0; i<nov; i++)
    {
        for(j=0; j<nov; j++)
        {

            printf("%d\t",adjacent[i][j]);

        }
        printf("\n");
    }



    BFS (0);
    printinfo();
    return 0;
}
