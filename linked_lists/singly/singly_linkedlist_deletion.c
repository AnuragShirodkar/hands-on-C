#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void display(struct node *head){

    struct node *temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

struct node* deleteFirst(struct node *head){

    if(head == NULL){
        printf("List is empty\n");
        return NULL;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);

    return head;
}

struct node* deleteLast(struct node *head){

    if(head == NULL){
        printf("List is empty\n");
        return NULL;
    }

    if(head->next == NULL){
        free(head);
        return NULL;
    }

    struct node *temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}

// struct node* deletePos(struct node *head, int pos){

//     if(head == NULL){
//         printf("List is empty\n");
//         return NULL;
//     }

//     if(pos == 1){
//         return deleteFirst(head);
//     }

//     struct node *temp = head;

//     for(int i = 1; i < pos-1; i++){

//         if(temp->next == NULL){
//             printf("Position out of range\n");
//             return head;
//         }

//         temp = temp->next;
//     }

//     if(temp->next == NULL){
//         printf("Position out of range\n");
//         return head;
//     }

//     struct node *nodeToDelete = temp->next;
//     temp->next = nodeToDelete->next;
//     free(nodeToDelete);

//     return head;
// }
struct node* deletePos(struct node *head, int pos){

    if(head == NULL){
        printf("List is empty\n");
        return NULL;
    }

    // Delete first node
    if(pos == 1){
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct node *prev = NULL;
    struct node *curr = head;

    for(int i = 1; i < pos; i++){

        if(curr == NULL){
            printf("Position out of range\n");
            return head;
        }

        prev = curr;
        curr = curr->next;
    }

    if(curr == NULL){
        printf("Position out of range\n");
        return head;
    }

    prev->next = curr->next;
    free(curr);

    return head;
}

struct node* deleteEntireList(struct node *head)
{
    struct node *temp;

    while(head != NULL)
    {
        temp = head;          // store current node
        head = head->next;    // move head forward
        free(temp);           // free previous node
    }

    return NULL;   // list fully deleted
}

int main(){

    struct node *head = malloc(sizeof(struct node));
    struct node *node2 = malloc(sizeof(struct node));
    struct node *node3 = malloc(sizeof(struct node));
    struct node *node4 = malloc(sizeof(struct node));
    struct node *node5 = malloc(sizeof(struct node));
    struct node *node6 = malloc(sizeof(struct node));

    head->data = 100;
    node2->data = 200;
    node3->data = 300;
    node4->data = 400;
    node5->data = 500;
    node6->data = 600;

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = NULL;

    printf("Original List:\n");
    display(head);

    head = deleteFirst(head);
    printf("\nAfter deleting first node:\n");
    display(head);

    head = deleteLast(head);
    printf("\nAfter deleting last node:\n");
    display(head);

    head = deletePos(head, 3);
    printf("\nAfter deleting position 3:\n");
    display(head);

    head = deleteEntireList(head);
    printf("\nAfter deleingn the entire loop:\n");
    display(head);

    return 0;
}
