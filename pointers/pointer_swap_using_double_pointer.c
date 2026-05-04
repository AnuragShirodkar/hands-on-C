#include<stdio.h>
int main(){
    int a, b;
    int *p1 = &a;
    int *p2 = &b;
    int **dp1 = &p1;
    int **dp2 = &p2;
    int temp = **dp1 ;

    printf("Enter 2 digits to swap: ");
    scanf("%d %d", &a, &b);

    printf("\nBefor Sawp\n");
    printf(" A = %d and \n B = %d", a, b);


    **dp1 = **dp2;
    **dp2 = temp;
    
    printf("\nAfter swap\n");
    printf("A = %d, & B = %d", a, b);
    return 0;
}