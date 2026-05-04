#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    char *start, *end;

    printf("Enter the string: ");
    scanf("%s", str);   

    start = str;                    // points to first character
    end = str + strlen(str) - 1;    // points to last character

    while(start < end) {

        if(*start != *end) {
            printf("Not Palindrome\n");
            return 0;
        }

        start++;   // move forward
        end--;     // move backward
    }

    printf("Palindrome\n");

    return 0;
}
