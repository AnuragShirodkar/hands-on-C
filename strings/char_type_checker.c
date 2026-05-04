#include<stdio.h>
#include<string.h>
int main(){
    char S;
    char i;
    printf("Enter the Data to chaeck: ");
    scanf("%c", &S);
    if(S>='A' && S<='Z'){
        printf("Its a Caps %c", S);
    }
    else if(S>='a' && S<='z'){
         printf("Its a Small %c", S);
    }
    else if(S>='0' && S<='9'){
        printf("Its a Digit %d", S);
    }
    else{
        printf("Its a Special Char");
    }
}