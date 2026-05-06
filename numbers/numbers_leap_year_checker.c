#include<stdio.h>
int main(){
    int yr;
    printf("Eneter the Year : ");
    scanf("%d",&yr);
    if(yr%400==0){
        printf("its a leap year");
    }
    else if(yr%100==0){
        printf("Is not a leap year");
    }
    else if(yr%4==0){
         printf("its a leap year");
    }
    else{
         printf("Is not a leap year");
    }

}