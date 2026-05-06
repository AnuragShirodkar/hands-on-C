#include<stdio.h>
int main(){
    int BlockedId=16,BlockedId1=25, i;
    for(i=1; i<=30; i++){
        printf("\nEnter the Your ID ");
        scanf("%d",&i);
        if(i>30){
            printf("Chech you Id");
        }
        else if(i==BlockedId){
            printf("\nAccess Denied for Blacklisted ID %d\n", i);
        }
        else if(i==BlockedId1){
              printf("\nAccess Denied for Blacklisted ID %d\n", i);
        }
        else{
            printf("Welcome");
        }
    }
}