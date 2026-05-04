#include <stdio.h>

int main() {

    char Str[100];
    char vowels[100];
    char others[100];

    char *ptr = Str;
    char *vptr = vowels;
    char *optr = others;

    printf("Enter the String:\n");
    fgets(Str, sizeof(Str), stdin);

    while (*ptr != '\0') {

        if (*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U') {
            *vptr = *ptr;
            vptr++;
        }
        else if (*ptr != '\n') {
            *optr = *ptr;
            optr++;
        }

        ptr++;
    }

    *vptr = '\0';
    *optr = '\0';

    printf("Vowels: %s\n", vowels);
    printf("Remaining Characters: %s\n", others);

    return 0;
}
