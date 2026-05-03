#include <stdio.h>

void sum(int array[], int N) {
    int i, SUM = 0;

    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
        SUM = SUM + array[i];
    }

    printf("Sum of array elements = %d\n", SUM);
}

int main() {
    int array[100];
    int N;

    printf("Enter the size of an array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array:\n");
    sum(array, N);

    return 0;
}
