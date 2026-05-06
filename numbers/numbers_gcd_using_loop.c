#include<stdio.h>
int main(){
    int a,b,i,gcd;
    printf("Enter 2 Numbers : ");
    scanf("%d %d",&a,&b);

    for(i=1; i<=a && i<=b; i++)
    {
        printf("%d",i);
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("\nThe GCD of %d and %d is %d",a,b,gcd);
}