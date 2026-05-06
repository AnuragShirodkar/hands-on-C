#include<stdio.h>
int main(){
    int num,fact=1,i;
    printf("Enter a Num: ");
    scanf("%d",&num);
    if(num<0){
        printf("Factorial cannot be performed for Zero");
    }
    else{
        for(i=1; i<=num; i++){
            fact=fact*i;
        }
        printf("Factorial of %d is = %d",num,fact);
    }
}