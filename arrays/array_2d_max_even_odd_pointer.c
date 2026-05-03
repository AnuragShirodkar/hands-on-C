#include <stdio.h>

#define N 10
#define M 10

int main() {
    int array[N][M];
    int i, j, n, m;
    int max, even, odd;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Enter number of columns: ");
    scanf("%d", &m);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", *(array + i) + j);   // pointer input
        }
    }

    printf("\nRow-wise MAX, EVEN count and ODD count:\n");

    for (i = 0; i < n; i++) {
        max = *(*(array + i) + 0);   // first element as max
        even = 0;
        odd = 0;

        for (j = 0; j < m; j++) {

            // Find MAX
            if (*(*(array + i) + j) > max) {
                max = *(*(array + i) + j);
            }

            // Count EVEN / ODD
            if (*(*(array + i) + j) % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        printf("Row %d -> Max = %d, Even = %d, Odd = %d\n",
               i + 1, max, even, odd);
    }

    return 0;
}
