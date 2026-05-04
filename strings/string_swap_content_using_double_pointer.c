#include <stdio.h>

void swapContent(char **S1, char **S2) {
    int i = 0;
    char temp;

    // swap character by character
    while ((*S1)[i] != '\0' || (*S2)[i] != '\0') {
        temp = (*S1)[i];
        (*S1)[i] = (*S2)[i];
        (*S2)[i] = temp;
        i++;
    }
}

int main() {
    char str1[] = "Anni";
    char str2[] = "Code";

    printf("Before Swap:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    swapContent(&str1, &str2);

    printf("\nAfter Swap:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}
