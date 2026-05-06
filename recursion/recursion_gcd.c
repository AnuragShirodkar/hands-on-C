#include<stdio.h>
int gcd(int , int );

int main(){
    int num1, num2, res;
    printf("Enter the 2 Positive numbers : ");
    scanf("%d %d ", &num1, &num2);
    res = gcd(num1,num2);
    printf("GSD of %d & %d is %d", num1, num2, res);
    return 0;
}
int gcd(num1, num2 )
{
    if(num2==0){
        return num1;
    }
    else{
        return gcd(num2, num1%num2);
    }
}