#include <stdio.h>

struct Item {
    char itemName[50];
    int quantity;
    float price;
    float total;
};

struct Bill {
    int billNo;
    char customerName[50];
    int itemCount;
    struct Item items[10];
    float grandTotal;
};

void addBill() {

    struct Bill B;
    B.grandTotal = 0;

    FILE *fp = fopen("MegaMart.txt", "a");

    if(fp == NULL) {
        printf("File not created\n");
        return;
    }

    printf("Enter Bill Number: ");
    scanf("%d", &B.billNo);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", B.customerName);

    printf("Enter Number of Items: ");
    scanf("%d", &B.itemCount);

    for(int i = 0; i < B.itemCount; i++) {

        printf("\nItem %d Name: ", i+1);
        scanf(" %[^\n]", B.items[i].itemName);

        printf("Quantity: ");
        scanf("%d", &B.items[i].quantity);

        printf("Price per item: ");
        scanf("%f", &B.items[i].price);

        B.items[i].total = B.items[i].quantity * B.items[i].price;

        B.grandTotal += B.items[i].total;
    }

    // Write to file
    fprintf(fp, "\n===== BILL =====\n");
    fprintf(fp, "Bill No: %d\n", B.billNo);
    fprintf(fp, "Customer: %s\n", B.customerName);

    for(int i = 0; i < B.itemCount; i++) {
        fprintf(fp, "\nItem: %s\n", B.items[i].itemName);
        fprintf(fp, "Qty: %d\n", B.items[i].quantity);
        fprintf(fp, "Price: %.2f\n", B.items[i].price);
        fprintf(fp, "Item Total: %.2f\n", B.items[i].total);
    }

    fprintf(fp, "\nGrand Total: %.2f\n", B.grandTotal);
    fprintf(fp, "=====================\n");

    fclose(fp);

    printf("\nBill Added Successfully!\n");
}

void displayBills() {

    FILE *fp = fopen("MegaMart.txt", "r");

    if(fp == NULL) {
        printf("No bills found.\n");
        return;
    }

    char ch;

    printf("\n------ ALL BILLS ------\n\n");

    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    printf("\n------------------------\n");

    fclose(fp);
}


int main() {

    int choice;

    do {
        printf("\n1. Add Bill\n");
        printf("2. Display Bills\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addBill();
                break;

            case 2:
                displayBills();
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 3);

    return 0;
}

