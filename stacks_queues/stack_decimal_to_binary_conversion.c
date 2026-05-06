#include<stdio.h>

#define MAX 32

int stack[MAX];
int top = -1;

void push(int value){
    if(top == MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main(){

    int num;

    printf("Enter decimal number: ");
    scanf("%d",&num);

    while(num > 0){
        push(num % 2);
        num = num / 2;
    }

    printf("Binary number: ");

    while(top != -1){
        printf("%d", pop());
    }

    return 0;
}