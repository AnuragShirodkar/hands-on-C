#include<stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int check(){
    if(top == MAX-1){
        return 1;
    }
    return 0;
}

void push(int value){

    if(check()){
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;

    printf("%d pushed into stack\n", value);
}

void pop(){

    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }

    int data = stack[top];
    printf("%d is popped\n", data);
    top--;
}

void peek(){

    if(top == -1){
        printf("Stack is empty\n");
        return;
    }

    printf("%d is at top\n", stack[top]);
}

void display(){

    if(top == -1){
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");

    for(int i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
}

int main(){

    int choice, value;

    do{
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
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    }while(choice != 5);

    return 0;
}