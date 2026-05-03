#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insert(struct node *head){

    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;

    // Move to last node
    while(temp->next != NULL){
        temp = temp->next;
    }

    // Create new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = 800;
    newNode->next = NULL;

    // Attach new node
    temp->next = newNode;

    printf("Node added: %d\n", newNode->data);
}

void insertBeginning(struct node *head)
{
    struct node* insertBeginning(struct node *head){

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = 50;

    newNode->next = head;   // point to old head
    head = newNode;         // update head

    return head;            // return new head
}
}

void insertAtPosition(struct node *head, int pos){

    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;

    for(int i = 1; i < pos; i++){
        if(temp->next == NULL){
            printf("Position out of range\n");
            return;
        }
        temp = temp->next;
    }

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = 999;

    newNode->next = temp->next;
    temp->next = newNode;

    printf("Node inserted at position %d\n", pos+1);
}


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

    // Create initial nodes
    struct node *head = malloc(sizeof(struct node));
    struct node *Current1 = malloc(sizeof(struct node));
    struct node *Current2 = malloc(sizeof(struct node));
    struct node *Current3 = malloc(sizeof(struct node));
    struct node *Current4 = malloc(sizeof(struct node));
    struct node *Current5 = malloc(sizeof(struct node));
    struct node *Current6 = malloc(sizeof(struct node));

    // Assign data
    head->data = 100;
    Current1->data = 200;
    Current2->data = 300;
    Current3->data = 400;
    Current4->data = 500;
    Current5->data = 600;
    Current6->data = 700;

    // Link nodes
    head->next = Current1;
    Current1->next = Current2;
    Current2->next = Current3;
    Current3->next = Current4;
    Current4->next = Current5;
    Current5->next = Current6;
    Current6->next = NULL;

    printf("Original List:\n");
    display(head);

    insert(head);

    printf("\nAfter Insertion:\n");
    display(head);

    printf("\n After ading at beginning\n");
    insertBeginning(head);
    display(head);

    printf("\n After ading bitween\n");
    insertAtPosition(head, 3);
    display(head);

    return 0;
}
