#include <stdio.h>

int main() {
    int num, mod, i;
    int Arr[10] = {0};  // Initialize all counts to 0

    printf("Enter a multi-digit number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        mod = num % 10;   
        Arr[mod]++;       
        num = num / 10;   
    }

    printf("\nDigit Occured:\n");
    for(i = 0; i < 10; i++) {
        printf("Digit %d = %d times\n", i, Arr[i]);
    }

    return 0;
}
