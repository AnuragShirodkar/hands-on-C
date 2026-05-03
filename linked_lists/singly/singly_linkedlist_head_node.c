#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

int main(){
    
    struct node *head = malloc(sizeof(struct node));
    head->data = 100;
    head->next = NULL;

    struct node *Current1 = malloc(sizeof(struct node));
    Current1->data = 200;
    Current1->next = NULL;
    head->next = Current1;

    struct node *Current2 = malloc(sizeof(struct node));
    Current2->data = 300;
    Current2->next = NULL;
    head->next = Current1;

    struct node *Current3 = malloc(sizeof(struct node));
    Current3->data = 400;
    Current3->next = NULL;
  //  head->next = Current1;

    printf("%d -> ", head->data);
    printf("%d ->", Current1->data);
    printf("%d ->", Current2->data);
    printf("%d ->", Current3->data);

    return 0;
}