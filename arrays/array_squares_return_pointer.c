#include<stdio.h>
int * sq_array(int arr[]){
    int i;
    for(i=0; i<5; i++){
        arr[i] = arr[i] * arr[i];
    }
    return arr;
}

 int main(){
    int array[5] = {1,2,3,4,5};
    int i;
    int *ptr = sq_array(array);
    for(i=0; i<5; i++){
        printf("%d\t", *(ptr +i));
    }
    return 0;
 }