#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int count = 0;

    printf("Enter a long string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        // If current char is not space and
        // (it is first character OR previous char is space)
        if ((str[i] != ' ' && str[i] != '\n') && (i == 0 || str[i-1] == ' ')) {

            count++;
        }

        i++;
    }

    printf("Number of words = %d\n", count);

    return 0;
}
