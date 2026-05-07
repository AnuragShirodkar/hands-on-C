#include <stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Odd.txt", "w");

    if(fptr == NULL){
        printf("File not created\n");
        return 1;
    }

    int i, n;
    printf("Enter the range of numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);

    printf("Odd numbers written successfully to Odd.txt\n");

    return 0;
}