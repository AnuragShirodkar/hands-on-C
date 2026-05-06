#include<stdio.h>
int main(){
    int menu, order=0;
    while(1){
    printf("\nWELCOME TO ANNI's CAFE");
    printf("\nPlease Enter your choise \n");
    printf("Press \n\t 1. Juice\n\t 2. Starters\n\t 3. Coffee\n\t 4. Deserts\n");
    scanf("%d",&menu);
  
    switch(menu){
        case 1:
        printf("\nEnter your Choise  ");
        printf("\nPress \n\t 1. Orangr\n\t 2. Apple\n\t 3. Chikoo\n\t 4. Watermelon\n");
        scanf("%d",&order);
        if(order==1){
            printf("Order Conformed of %d Orange",order);
        }
        else if(order==2){
            printf("Order Conformed of %d Apple",order);
        }
        else if(order==3){
            printf("Order Conformed of %d Chikoo",order);
        }
        else if(order==4){
            printf("Order Conformed of %d Watermelon",order);
        }
        else{
            printf("Oops not in a menu");
        }
        break;

        case 2:
        printf("\nEnter your Choise  ");
        printf("\nPress \n\t 1. Fries\n\t 2. Soup\n\t 3. Gobi\n\t 4. Masala papad\n");
        scanf("%d",&order);
        if(order==1){
            printf("Order Conformed of %d Fries",order);
        }
        else if(order==2){
            printf("Order Conformed of %d Soup",order);
        }
        else if(order==3){
            printf("Order Conformed of %d Gobi",order);
        }
        else if(order==4){
            printf("Order Conformed of %d Masala Papad",order);
        }
        else{
            printf("Oops not in a menu",order);
        }
        break;

        case 3:
        printf("\nEnter your Choise  ");
        printf("\nPress \n\t 1. Filter\n\t 2. Espresso\n\t 3. Cold\n\t 4. Cappachino\n");
        scanf("%d",&order);
        if(order==1){
            printf("Order Conformed of %d Filter",order);
        }
        else if(order==2){
            printf("Order Conformed of %d Espresso",order);
        }
        else if(order==3){
            printf("Order Conformed of %d Cold",order);
        }
        else if(order==4){
            printf("Order Conformed of %d Cappahino",order);
        }
        else{
            printf("Oops not in a menu");
        }
        
        break;

        case 4:
        printf("\nEnter your Choise  ");
        printf("\nPress \n\t 1. DBC\n\t 2. Apricot\n\t 3. Gulab Jamun\n\t 4. Faludha\n");
        scanf("%d",&order);
        if(order==1){
            printf("Order Conformed of %d DBC",order);
        }
        else if(order==2){
            printf("Order Conformed of %d Apricot",order);
        }
        else if(order==3){
            printf("Order Conformed of %d Gulab Jamun",order);
        }
        else if(order==4){
            printf("Order Conformed of %d Faluda",order);
        }
        else{
            printf("Oops not in a menu");
        }
        
        break;

        default:
        printf("Oops Enter the correct choise");



    }
}
    

}
