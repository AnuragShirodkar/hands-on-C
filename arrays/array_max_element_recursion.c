#include<stdio.h>

int MAX(int arr[], int n){
    int max;

    if(n == 1)   
        return arr[0];

    max = MAX(arr, n - 1);   

    if(arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}

int main(){
    int n, i, result;
    int arr[100];

    printf("Enter the range of an Array: ");
    scanf("%d", &n);

    printf("Enter %d elements of an array: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    result = MAX(arr, n);   

    printf("Maximum element = %d\n", result);

    return 0;
}
