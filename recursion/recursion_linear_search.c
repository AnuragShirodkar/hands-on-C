#include<stdio.h>

int Linear(int arr[], int n, int key, int index){
    if (index == n)
    return 0;

    if (arr[index]==key)
    return index;

    return Linear(arr, n, key, index+1);
}

int main(){
    int key, i, num, pos;
    int arr[100];
    printf("Enter the Range of the array: ");
    scanf("%d", &num);

    printf("Enter the %d elements of the array: ");
    for(i=0; i<num; i++){
    scanf("%d", &arr[i]);
    }

    printf("Enter the key to be found : ");
    scanf("%d", &key);
    
    pos=Linear(arr, num, key, 0);

    printf("%d", pos);
    return 0;
}