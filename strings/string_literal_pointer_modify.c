#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Anni";
    char *p = str;
    *p = 'a';
    printf("%s", str);
}