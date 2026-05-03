#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void count(struct node *next){

    int cou = 0;
    struct node *temp = next;

    while(temp != NULL){
        cou++;
        temp = temp->next;
    }

    printf("\nThe number of nodes are: %d\n", cou);
}

int main(){

    struct node *head = malloc(sizeof(struct node));
    struct node *Current1 = malloc(sizeof(struct node));
    struct node *Current2 = malloc(sizeof(struct node));
    struct node *Current3 = malloc(sizeof(struct node));
    struct node *Current4 = malloc(sizeof(struct node));
    struct node *Current5 = malloc(sizeof(struct node));
    struct node *Current6 = malloc(sizeof(struct node));
//Assign data
    head->data = 100;
    Current1->data = 200;
    Current2->data = 300;
    Current3->data = 400;
    Current4->data = 500;
    Current5->data = 600;
    Current6->data = 700;

    head->prev = NULL;
    head->next = Current1;

    Current1->prev = head;
    Current1->next = Current2;

    Current2->prev = Current1;
    Current2->next = Current3;

    Current3->prev = Current2;
    Current3->next = Current4;

    Current4->prev = Current3;
    Current4->next = Current5;

    Current5->prev = Current4;
    Current5->next = Current6;

    Current6->prev = Current5;
    Current6->next = NULL;

    count(next);

    return 0;
}
