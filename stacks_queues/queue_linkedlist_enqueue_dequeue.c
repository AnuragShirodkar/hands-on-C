#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int data){
    struct node *newNode = malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = NULL;

    if(front == NULL){
        front = rear = newNode;
    }
    rear->next = newNode;
    rear = newNode;
    printf("\n %d added to the node ",data);

}

int dequeue(){
    int value;
    if(front == NULL)
    printf("\nThe Queue is empty ");

    struct node *temp = front;
    printf("\n %d is removed ", front->data);
    front = front->next;
    free(temp);

    if(front == NULL)
    rear = NULL;
}

void display(){
    if(front == NULL){
        printf("The Queue is empy=ty");
    }
    struct node *temp = front;

    printf("Queue elements:\n");

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    dequeue();
    dequeue();
    display();
}