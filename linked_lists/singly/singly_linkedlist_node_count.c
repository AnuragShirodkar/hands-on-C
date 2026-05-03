#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void count(struct node *head){

    int cou = 0;
   // struct node *temp = head;
   struct node *temp = NULL;
   if(head == NULL){
    printf("LIst is empty");
   }
temp = head;

    while(temp != NULL){
        cou++;
        temp = temp->next;
    }

    printf("\nThe number of nodes are: %d\n", cou);
}

void display(struct node *head){
    if(head == NULL){
        printf("The list is empty");
    }
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ->", temp->data);
        temp = temp->next;
    }
}

int main(){

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

    // printf("%d -> ", head->data);
    // printf("%d ->", Current1->data);
    // printf("%d ->", Current2->data);
    // printf("%d ", Current3->data);

    count(head);

    return 0;
}
