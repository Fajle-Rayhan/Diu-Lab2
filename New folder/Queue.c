#include <stdio.h>
#define MAX 100
int front=-1, rear=-1;
int arr[MAX], nov=MAX;
int isEmpty(){
    if(front==-1)
    {
       return 0;
    }
    else if(front>rear)
    {
        front=-1;
        rear=-1;
         return 0;
    }
      return 1;
}

int isFull(){
    if (rear==nov-1){
        return 0;
    }
    return 1;
}

 void EnQueue(int element){
    if(isEmpty()==0)
    {
        front ++;
    }
    if (isFull()==0)
    {
        printf("Queue is full!");
    }
    else
    {
        rear ++;
        arr[rear]=element;
    }
}

 void DeQueue(){
    if  (isEmpty()==0){
        printf("Queue is empty!");
    }
    else
    {
        front ++;
    }
 }
 void printElement(){
    int i;
    for (i=front;i<=rear;i++){
        printf("\n%d\n",arr[i]);
    }
 }

 void menu(){
    printf("\nWrite your choice...\n1.Insert into Queue \n2.Delete from Queue\n3.Show All elements\n");
    int choice;
    scanf("%d",&choice);
    switch (choice){
    case 1:
        printf("\nEnter the element: ");
        int element;
        scanf("%d",&element);
        EnQueue(element);
        break;
    case 2:
        DeQueue();
        break;
    case 3:
        printElement();
        break;
    default:
        printf("Invalid Choice");
        break;
    }

 }
int main()
{
    printf("How many element do you want to input: \n");
    scanf("%d",&nov);
    while(1){
        menu();
    }
}

