#include<stdio.h>
#include<string.h>
int main(){
    char S;
    char i;
    printf("Enter the Data to chaeck: ");
    scanf("%c", &S);
    if(S=='A'|| S=='E'|| S=='I'||S=='O'||S=='U'){
        printf("Its a Ovels %c", S);
    }
    else if(S=='a'|| S=='e'|| S=='i'||S=='o'||S=='u'){
         printf("Its a Ovels %c", S);
    }
    else if(S>='0' && S<='9'){
        printf("Its a Digit %d", S);
    }
    else{
        printf("Its a Special Char");
    }
}