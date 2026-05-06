//To convert infix to postfix exp.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 20

int top = -1;
char stack[max];
char infix[max],postfix[max];

int isfull()
{ 
    if(top == max-1)
         return 1;
    else 
        return 0;
}
int isempty() 
{
    if(top == -1)
         return 1;
    else
         return 0;
}

void push(char data)
{
   if(isfull())
    {
        printf("Stack overflow: \n");
    }
    else
    {
        top++;
        stack[top]=data;
    }
}

char pop()
{
    char value;
    if(isempty())
    {
        printf("Stack underflow: ");
        exit(1);
    }
    value = stack[top];
    top = top -1; //top--
    return value;
}

int precedence(char c)
{
    if(c == '^')
        return 3;
    if(c == '*' || c == '/')
        return 2;
    if(c == '+' || c == '-')
        return 1;
    return 0;
}
void inpost()
{
    int i, j=0;
    char symbol;
    for(i=0;i<strlen(infix);i++)
    {
        symbol = infix[i];
        switch(symbol)
        {
            case '(':push(symbol);break;
            case ')':while(stack[top] !='(')
                      postfix[j++]=pop();
                      pop(); break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
            while(!isempty() && precedence(stack[top])>=precedence(symbol))
            {
                postfix[j++] = pop();
            }
            push(symbol);break;
            default:postfix[j++]=symbol;
        }
    }
    while(!isempty())
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    
}
int main()
{
    printf("Enter expression: ");
    scanf("%[^\n]", infix);
    
    inpost();
    
    printf("Postfix expression: %s ",postfix);
    
    return 0;
}