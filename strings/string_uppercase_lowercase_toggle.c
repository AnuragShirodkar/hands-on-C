#include <stdio.h>

void LowUp(char S[]) { 
    int i = 0;

    while (S[i] != '\0') {
        if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = S[i] - 32;  
        }
        i++;
    }

    printf("The modified Upper case string is: %s", S);
}

void UpLow(char S[]) { 
    int i = 0;

    while (S[i] != '\0') {
        if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] + 32;  
        }
        i++;
    }

    printf("The modified Lower case string is: %s", S);
}

void Togal(char S[]) { 
    int i = 0;

    while (S[i] != '\0') {

    if (S[i] >= 'A' && S[i] <= 'Z') {
        S[i] = S[i] + 32;      // Upper → Lower
    }
    else if (S[i] >= 'a' && S[i] <= 'z') {
        S[i] = S[i] - 32;      // Lower → Upper
    }

    i++;   
}

    printf("The modified Toggle case string is: %s", S);
}

int main() {
    char s[100];

    printf("Enter a mixed string: ");
    fgets(s, sizeof(s), stdin);

    LowUp(s);
    UpLow(s);
    Togal(s);

    return 0;
}
