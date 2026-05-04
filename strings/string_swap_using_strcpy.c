#include <stdio.h>
#include <string.h>

void swap(char S1[], char S2[]) {
    char temp[100];

    strcpy(temp, S1);
    strcpy(S1, S2);
    strcpy(S2, temp);
}

int main() {
    char Str1[100];
    char Str2[100];

    printf("Enter 1st String: ");
    fgets(Str1, sizeof(Str1), stdin);

    printf("Enter 2nd String: ");
    fgets(Str2, sizeof(Str2), stdin);

    printf("\nBefore Swap:\n");
    printf("String 1: %s", Str1);
    printf("String 2: %s", Str2);

    swap(Str1, Str2);

    printf("\nAfter Swap:\n");
    printf("String 1: %s", Str1);
    printf("String 2: %s", Str2);

    return 0;
}
