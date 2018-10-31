#include<stdio.h>

void enqueu(int);
void dequeue();
void display();

int items[5], front=-1;rear=-1;

void enqueu(int value){
    if (rear==5-1)
        printf("\nQueue is full");
    else{
        if(front==-1)
            front=0;
        rear++;
        items[rear] = value;
        printf("\nInserted : %d", value);
    }

}

void dequeue(){
    if(front == -1)
        printf("\nQueue is Empty");
    else{
        printf("\nDeleted : %d", items[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}





int main(){
    dequeue();

    enqueu(1);
    enqueu(2);
    enqueu(3);
    enqueu(4);
    enqueu(5);

    enqueu(6);



    dequeue();

return 0;
}



