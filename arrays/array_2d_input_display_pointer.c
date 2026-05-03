#include <stdio.h>

#define N 10
#define M 10

int main() {
    int array[N][M];
    int i, j, n, m;

    printf("Enter number of rows (n): ");
    scanf("%d", &n);

    printf("Enter number of columns (m): ");
    scanf("%d", &m);

    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", *(array + i) + j);
        }
    }

    printf("The 2D array is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", *(*(array + i) + j));
        }
        printf("\n");
    }

    return 0;
}
