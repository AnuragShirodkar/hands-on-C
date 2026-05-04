#include <stdio.h>

void swap(char **S1, char **S2) {
    char *temp;

    temp = *S1;   // store address of S1
    *S1 = *S2;    // S1 now points to S2
    *S2 = temp;   // S2 now points to old S1
}

int main() {

    char *Str1 = "Anni";
    char *Str2 = "Code";

    printf("Before Swap:\n");
    printf("String 1: %s\n", Str1);
    printf("String 2: %s\n", Str2);

    swap(&Str1, &Str2);

    printf("\nAfter Swap:\n");
    printf("String 1: %s\n", Str1);
    printf("String 2: %s\n", Str2);

    return 0;
}
