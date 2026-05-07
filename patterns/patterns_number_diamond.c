#include <stdio.h>

int main() {
    int rows, i, j, data, n;
    printf("Enter the rows of pattern: ");
    scanf("%d", &rows);
    n = rows;  
    for (i = 1; i <= rows; i++) {
        data=1;
        for (j = 1; j <= (2 * rows - 1); j++) {

            if (j >= (n - (i - 1)) && j <= (n + (i - 1))) {
                printf("%d",data);
                data++;
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
