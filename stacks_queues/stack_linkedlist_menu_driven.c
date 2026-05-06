#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value){

    struct node *newNode = malloc(sizeof(struct node));

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack\n", value);
}

void pop(){

    if(top == NULL){
        printf("Stack Underflow\n");
        return;
    }

    struct node *temp = top;

    printf("%d popped from stack\n", top->data);

    top = top->next;

    free(temp);
}

void peek(){

    if(top == NULL){
        printf("Stack is empty\n");
        return;
    }

    printf("Top element is %d\n", top->data);
}

void display(){

    if(top == NULL){
        printf("Stack is empty\n");
        return;
    }

    struct node *temp = top;

    printf("Stack elements:\n");

    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main(){

    int choice, value;

    do{

        printf("\nSTACK MENU \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    }while(choice != 5);

    return 0;
}