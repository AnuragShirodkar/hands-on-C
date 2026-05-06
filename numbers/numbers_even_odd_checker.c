#include<stdio.h>
int main()
{
    int num, res;
    printf("Enter the Number:");
    scanf("%d", &num);
    res= num % 2 ;
    if(res==0)
    {
        printf("The Num is EVEN");
    }
    else{
        printf("The Num is ODD");
    }
    return 0;
}