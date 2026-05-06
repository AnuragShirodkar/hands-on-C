#include<stdio.h>
#include<ctype.h>

#define MAX 20

int stack[MAX];
int top = -1;

void push(int value){
    stack[++top] = value;
}

int pop(){
    return stack[top--];
}

int main(){

    char postfix[20];
    int i = 0;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    while(postfix[i] != '\0'){

        if(isdigit(postfix[i])){
            push(postfix[i] - '0');   // convert char to number
        }

        else{
            int b = pop();
            int a = pop();

            switch(postfix[i]){
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }

        i++;
    }

    printf("Result = %d", pop());

    return 0;
}