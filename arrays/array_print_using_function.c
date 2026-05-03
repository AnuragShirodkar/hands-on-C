#include<stdio.h>
 
void print(int a[], int N){
    int i;
    for(i=0; i<N; i++){
        printf("%d\n ", a[i]);
    }
}
    int main(){
        int arr[5] = {1, 2, 3, 4, 5};
        int N=5;
        print(arr, N);
        return 0;
    }
 

