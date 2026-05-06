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

int main(){
    push(100);
    push(200);
    pop();

}