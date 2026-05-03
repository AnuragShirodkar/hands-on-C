#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    while(head != NULL)
    {
        printf("%d  ", head->data);
        head = head->next;
    }
    //printf("NULL\n");
}

struct node* reverse(struct node *head)
{
    struct node *prev = NULL; 
    struct node *curr = head;
    struct node *next = NULL;

    while(curr != NULL)
    {
        next = curr->next;   // store next
        curr->next = prev;   // reverse link
        prev = curr;         // move prev forward
        curr = next;         // move curr forward
    }

    return prev;   // new head
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *n2 = malloc(sizeof(struct node));
    struct node *n3 = malloc(sizeof(struct node));
    struct node *n4 = malloc(sizeof(struct node));

    head->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    printf("Original List:\n");
    display(head);

    head = reverse(head);

    printf("\nReversed List:\n");
    display(head);

    return 0;
}
