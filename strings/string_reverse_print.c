#include<stdio.h>

int main(){
    char S[10];
    printf("Enter the String to Reverce: ");
    gets(S);
    printf("The Reverced Order is \n");
    for(int i=sizeof(S)-1; i>=0; i--){
    printf("%c", S[i]);
    }
}