#include <stdio.h>

int main(){

    FILE *fp;

    fp = fopen("Example.bin", "wb");  

    if(fp == NULL){
        printf("File not created\n");
        return 1;
    }

    int num = 250;

    fwrite(&num, sizeof(num), 1, fp);

    fclose(fp);

    printf("Binary data written successfully\n");

    return 0;
}
