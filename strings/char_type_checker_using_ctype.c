#include <stdio.h>
#include <ctype.h>

int main() {
    char S;

    printf("Enter the Data to check: ");
    scanf("%c", &S);

    if (isupper(S)) {
        printf("Its a Capital Letter: %c\n", S);
    }
    else if (islower(S)) {
        printf("Its a Small Letter: %c\n", S);
    }
    else if (isdigit(S)) {
        printf("Its a Digit: %c\n", S);
    }
    else {
        printf("Its a Special Character\n");
    }

    return 0;
}
