#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);
    while(str[i]!='\0'){
        if(str[i]=='A'){
            str[i]='Z';
        }
        else if(str[i]=='a'){
            str[i]='z';
        }
        else if(str[i]=='Z'){
            str[i]='A';
        }
        else if(str[i]=='z'){
        str[i]='a';
        }
        i++;
    }
    printf("The converted string is %s", str);
    return 0;
}