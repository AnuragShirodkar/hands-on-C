#include<stdio.h>
#define MAX 5

int stack[MAX];
int top =-1;

int check(){
    if(top==MAX-1){
        return 1;
    }
    return 0;
}

void push(int value){
    if(check()){
        printf("The stack is full");
    }
    top++;
    stack[top]=value;
}

void pop(){
    if(top==-1){
        printf("The stack is empty");
    }
    int data = stack[top];
    printf("%d is popped", data); 
    top--;
}

void peak(){
    if(top==-1){
        printf("The stack is empty");
    }
    printf("\n%d is at top\n",stack[top]);
}

void display(){
    if(top==-1){
        printf("The stack is empty\n");
    }
    for(int i=top; i>=0; i--){
        printf("%d\n",stack[i]);
    }
}

int main(){
    push(100);
    push(233);
    push(98);
    push(8989);
    push(200);
    pop();
    peak();
    display();
}