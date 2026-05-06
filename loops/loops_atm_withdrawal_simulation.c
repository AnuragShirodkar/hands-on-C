#include<stdio.h>
int main(){
    int Amount;
    do{
    printf("Please Enter the Amount to be withdraw : ");
    scanf("%d",&Amount);
    }
    while(Amount%100!=0);
    printf("Transection in process");
    
    return 0;
}