#include <stdio.h>

int main() {
    char Name[100];
    int freq[256] = {0};
    char *ptr;

    printf("Enter the Name:\n");
    fgets(Name, sizeof(Name), stdin);

    ptr = Name;   // pointer pointing to start of string

    while (*ptr != '\0') {
        if (*ptr != '\n')   // ignore newline
            freq[(int)*ptr]++;

        ptr++;   // move pointer to next character
    }

    printf("\nCharacter Frequency:\n");

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}
