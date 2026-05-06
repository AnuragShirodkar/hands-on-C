#include<stdio.h>
int main(){
    int num, rem, temp, sum=0;
    printf("Enter the Number :");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(temp==sum){
        printf("Its a Amstrong Number");
    }
    else{
        printf("Its Not an Amstrong Number");
    }
    return 0;
}