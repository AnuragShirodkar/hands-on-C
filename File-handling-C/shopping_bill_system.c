#include <stdio.h>

struct Bill {
    int billNo;
    char customerName[50];
    char itemName[50];
    int quantity;
    float costPerItem;
    float total;
};

// Function to add bill
void addBill() {
    int N;
    struct Bill B;

    FILE *fp = fopen("MegaMart.txt", "a");  

    if(fp == NULL) {
        printf("File not created\n");
        return;
    }

    printf("\nEnter Bill Number: ");
    scanf("%d", &B.billNo);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", B.customerName);

    printf("Enter Item Name: ");
    scanf(" %[^\n]", B.itemName);

    printf("Enter Quantity: ");
    scanf("%d", &B.quantity);

    printf("Enter Cost per Item: ");
    scanf("%f", &B.costPerItem);

    B.total = B.quantity * B.costPerItem;

    //fprintf(fp, "%d %s %s %d %.2f %.2f\n",B.billNo,B.customerName,B.itemName,B.quantity,B.costPerItem,B.total);

        fprintf(fp,"\nBill Number: %d\n", B.billNo);
        fprintf(fp,"Customer Name: %s\n", B.customerName);
        fprintf(fp, "Item Name: %s\n", B.itemName);
        fprintf(fp, "Quantity: %d\n", B.quantity);
        fprintf(fp, "Cost per Item: %.2f\n", B.costPerItem);
        fprintf(fp, "Total: %.2f\n", B.total);

    fclose(fp);

    printf("\nBill Added Successfully!\n");
}

// Function to display all bills
void displayBill() {

    struct Bill B;

    FILE *fp = fopen("MegaMart.txt", "r");

    if(fp == NULL) {
        printf("No bills found.\n");
        return;
    }

    printf("\n------ All Bills ------\n");

    while(fscanf(fp,
                 "\nBill Number: %d\nCustomer Name: %[^\n]\nItem Name: %[^\n]\nQuantity: %d\nCost per Item: %f\nTotal: %f",
                 &B.billNo,
                 B.customerName,
                 B.itemName,
                 &B.quantity,
                 &B.costPerItem,
                 &B.total) == 6)
    {
        printf("\nBill Number: %d\n", B.billNo);
        printf("Customer Name: %s\n", B.customerName);
        printf("Item Name: %s\n", B.itemName);
        printf("Quantity: %d\n", B.quantity);
        printf("Cost per Item: %.2f\n", B.costPerItem);
        printf("Total: %.2f\n", B.total);
        printf("------------------------\n");
    }

    fclose(fp);
}

int main() {

    int choice;

    do {
        printf("\n1. Add Bill\n");
        printf("2. Display Bills\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addBill();
                break;

            case 2:
                displayBill();
                break;

            case 3:
                printf("Exiting program. Thank you!\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 3);

    return 0;
}
