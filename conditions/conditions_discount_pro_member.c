#include<stdio.h>
int main(){
    float Prize, Discount=0.0, Total;
    char isPro;
    printf("Enter the Pro ID : ");
    scanf("%c",&isPro);
    printf("Enter the Total amount : \n");
    scanf("%f",&Prize);
    
    if(isPro=='y')
    {
        if(Prize>500){
            Discount=(Prize-25)/100;
            Total=Prize-Discount;
            printf("Congo you saved %f",Discount);
            printf("\nThe total amount for PRO  after discount is :%f",Total);
        }
        else if(Prize>200){
            Discount=(Prize-15)/100;
            Total=Prize-Discount;
            printf("Congo you saved %f",Discount);
            printf("\nThe total amount for PRO after discount is :%f",Total);

        }
        else{
            Discount=(Prize-10)/100;
            Total=Prize-Discount;
            printf("Congo you saved %f",Discount);
            printf("\nThe total amount for PRO after discount is :%f",Total);
        }
    }
    else{
         if(Prize>500){
            Discount=(Prize-10)/100;
            Total=Prize-Discount;
            printf("Congo you saved %f",Discount);
            printf("\nThe total amount after discount is :%f",Total);
        }
        else if(Prize>200){
            Discount=(Prize-5)/100;
            Total=Prize-Discount;
            printf("Congo you saved %f",Discount);
            printf("\nThe total amount after discount is :%f",Total);

        }
        else{
            printf("Buy a membership for best deals");
            printf("\nThe total amount is :%f",Prize);

        }
    }
    return 0;
}