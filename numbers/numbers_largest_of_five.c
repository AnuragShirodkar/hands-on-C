#include<stdio.h>
int main(){
    int num, lar=0;
    int i;
    for(i=0;i<5;i++){
        printf("Enter the Number %d : ",i+1);
        scanf("%d",&num);
        if(lar<num){
            lar=num;
        }
    }
    printf("\nThe largest value is %d",lar);
    return 0;
}