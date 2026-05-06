#include <stdio.h>

int main() {
    int pass = 1111;
    int max = 3;
    int attempt = 1;
    int pin, res;

    do {
        printf("Please Enter the PIN: ");
        scanf("%d", &pin);

        if (pin == pass) {
            printf("Access Granted\n");
                        
        }

        
        attempt++;
        
    } while (attempt <= max);

   
    printf("Acc Blocked\n");
    return 0;
}
