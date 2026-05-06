#include<stdio.h>
#define max 10

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int data){
    if(rear == max-1){
        printf("The Queue is overflow");
    }
    if(front ==-1)
    front =0;
    rear++;
    queue[rear] = data;
    printf("\n%d added to the Queue", queue[rear]);

}

int dequeue(){
    if(front == -1 || front > rear){
        printf("Queue Underflow\n");
        return;
    }
    printf("\n%d removed from queue\n", queue[front]);
    front++;
}

void display(){

    if(front == -1 || front > rear){
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");

    for(int i = front; i <= rear; i++){
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main(){
    enqueue(9);
    enqueue(8);
    enqueue(7);
    dequeue();
    display();

}