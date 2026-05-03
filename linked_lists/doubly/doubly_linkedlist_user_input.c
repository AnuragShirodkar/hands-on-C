#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void display(struct node *head){

    if(head == NULL){
        printf("The list is empty\n");
        return;
    }

    struct node *temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main(){

    int num;

    printf("Enter number of nodes: ");
    scanf("%d", &num);

    struct node *head = NULL;
    struct node *temp = NULL;

    for(int i = 0; i < num; i++){

        struct node *newNode = malloc(sizeof(struct node));

        printf("Enter data for node %d: ", i+1);
        scanf("%d", &newNode->data);

        newNode->next = NULL;
        newNode->prev = NULL;

        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }

    printf("\nLinked List:\n");
    display(head);

    return 0;
}