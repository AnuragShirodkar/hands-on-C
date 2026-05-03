#include <stdio.h>

#define N 10
#define M 10

int main() {
    int array[N][M];
    int i, j, n, m, temp;

    printf("Enter number of rows (n): ");
    scanf("%d", &n);

    printf("Enter number of columns (m): ");
    scanf("%d", &m);

    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    
    for (i = 0; i < n / 2; i++) {
        for (j = 0; j < m; j++) {
            temp = array[i][j];
            array[i][j] = array[n - 1 - i][j];
            array[n - 1 - i][j] = temp;
        }
    }

    printf("Matrix after reversing rows:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
