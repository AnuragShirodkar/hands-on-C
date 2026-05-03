#include <stdio.h>

void SQarray(int *Arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(Arr + i) = (*(Arr + i)) * (*(Arr + i));
    }
}

int main() {
    int array[100];
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    SQarray(array, n);   // pass array using pointer

    printf("Square of array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
