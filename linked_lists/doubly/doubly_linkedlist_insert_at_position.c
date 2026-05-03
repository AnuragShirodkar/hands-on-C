#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void display(struct node *head){

    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;

    while(temp != NULL){
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

struct node* insertAtPosition(struct node *head, int pos){

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = 999;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(pos == 1){
        newNode->next = head;
        if(head != NULL)
            head->prev = newNode;

        head = newNode;
        return head;
    }

    struct node *temp = head;

    for(int i = 1; i < pos-2; i++){

        if(temp->next == NULL){
            printf("Position out of range\n");
            return head;
        }

        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;

    return head;
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

    printf("\nOriginal List:\n");
    display(head);

    int pos;
    printf("\nEnter position to insert new node: ");
    scanf("%d", &pos);

    head = insertAtPosition(head, pos);

    printf("\nList after insertion:\n");
    display(head);

    return 0;
}