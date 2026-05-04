#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];
    char search[50];
    int i, found = 0;

    printf("Enter 5 names:\n");

    for (i = 0; i < 5; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';  // remove newline
    }

    printf("\nEnter name to search: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    for (i = 0; i < 5; i++) {
        if (strcmp(names[i], search) == 0) {
            printf("Name found at position %d\n", i + 1);
            found = 1;
            break ;
        }
    }

    if (!found) {
        printf("Name not found in the list.\n");
    }

    return 0;
}
