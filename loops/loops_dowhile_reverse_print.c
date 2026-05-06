#include<stdio.h>
int main(){
    int num;
    printf("Enter the range of Num:");
    scanf("%d",&num);
    do{
        printf("%d",num);
        num--;
    }
    while(num>0);
    return 0;
}