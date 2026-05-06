#include<stdio.h>
int main(){
    int Base, Expo, Ans=1, Power;
    float Ans2=1.0;
    printf("Enter the base of a number: ");
    scanf("%d",&Base);
    printf("Enter the Exponents of a number: ");
    scanf("%d",&Expo);
    Power=Expo;
    if(Expo>0){
        do{
            
            Ans=Ans*Base;
            Expo--;
        }
        while(Expo>0);
        printf("%d to power of %d is %d", Base,Power,Ans);
    }
    else{
        do{
            Ans2=Ans2*(1.0/Base);
            Expo++;
        }
        while(Expo!=0);
         printf("%d to power of %d is %f", Base,Power,Ans2);
    }
    return 0;

}