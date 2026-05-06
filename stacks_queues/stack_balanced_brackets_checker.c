#include<stdio.h>
#define MAX 20

char stack[MAX];
int top = -1;

void push(char value){
    if(top == MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

char pop(){
    if(top == -1){
        return '\0';
    }
    return stack[top--];
}

int main(){

    char eq[20];

    printf("Enter the expression: ");
    //scanf("%s", eq);
    fgets(eq, sizeof(eq), stdin);

    for(int i = 0; eq[i] != '\0'; i++){

        if(eq[i]=='(' || eq[i]=='[' || eq[i]=='{'){
            push(eq[i]);
        }

        else if(eq[i]==')' || eq[i]==']' || eq[i]=='}'){

            char ch = pop();

            if((eq[i]==')' && ch!='(') || (eq[i]==']' && ch!='[') || (eq[i]=='}' && ch!='{')){
                printf("Invalid Expression\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Expression is Balanced\n");
    else
        printf("Invalid Expression\n");

    return 0;
}