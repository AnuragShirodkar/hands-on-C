#include <stdio.h>

void LowUp(char S[]) { 
    int i = 0;

    while (S[i] != '\0') {
        if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = S[i] - 32;  
        }
        i++;
    }

    printf("The modified string is: %s", S);
}

int main() {
    char s[100];

    printf("Enter a mixed string: ");
    fgets(s, sizeof(s), stdin);

    LowUp(s);

    return 0;
}
