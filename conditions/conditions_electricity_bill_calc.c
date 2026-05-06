#include<stdio.h>
int main(){
    int ID, units;
    char name[30];
    float charge, bill, surcharge = 0;
    printf("Enter the Customer Name: ");
    scanf("%s", &name);
    printf("Enter the ID of %s: ", name);
    scanf("%d", &ID);
    printf("Enter the Unit consumed by %d: ", ID);
    scanf("%d", &units);
    if (units <= 199)
        charge = 1.20;
    else if (units >= 200 && units < 400)
        charge = 1.50;
    else if (units >= 400 && units < 600)
        charge = 1.80;
    else
        charge = 2.00;

    bill = units * charge;

    if (bill > 400)
        surcharge = bill * 0.15;

    bill = bill + surcharge;

    if (bill < 100)
        bill = 100;
    printf("\nElectricity Bill\n");
    printf("Customer Name : %s\n", name);
    printf("Customer ID   : %d\n", ID);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill    : Rs. %f\n", bill);

    return 0;
}