#include <stdio.h>

int main() {
    int array[100];
    int N, i, j, k, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter number of left shifts: ");
    scanf("%d", &k);
    k = k % N;
    for (i = 0; i < k; i++) {
        temp = array[0];          

        for (j = 0; j < N - 1; j++) {
            array[j] = array[j + 1];
        }

        array[N - 1] = temp;      
    }

    printf("Array after left shift:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
