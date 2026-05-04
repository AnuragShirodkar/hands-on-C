#include <stdio.h>
#include <ctype.h>

int main() {
    char S[100];
    int i;
    int vowel = 0, digit = 0, Cons = 0;

    printf("Enter the Data to check: ");
    scanf("%s", S);

    for (i = 0; S[i] != '\0'; i++) {

        S[i] = tolower(S[i]);   // convert to lowercase

        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' ||
            S[i] == 'o' || S[i] == 'u') {

            vowel++;
        }
        else if (S[i] >= '0' && S[i] <= '9') {
            digit++;
        }
        else if (S[i] >= 'a' && S[i] <= 'z') {
            Cons++;
        }
    }

    printf("No of vowels is : %d\n", vowel);
    printf("No of digits is : %d\n", digit);
    printf("No of Consonants is : %d\n", Cons);

    return 0;
}
