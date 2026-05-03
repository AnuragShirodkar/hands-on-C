#include <stdio.h>

void findSQ(int arr[], int n) {
    int i;
    printf("Squares of elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
}

int main() {
    int n, i;
    int arr[100];   

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSQ(arr, n);  

    return 0;
}
