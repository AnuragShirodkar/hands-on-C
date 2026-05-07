#include<stdio.h>

int main(){

    FILE *fp;
    fp = fopen("Count_Char.txt", "r");

    if(fp == NULL){
        printf("File not exist\n");
        return 1;
    }

    int count = 1;
    int ch;
   

    while((ch = fgetc(fp)) != EOF){

        if(ch == ' ')
        count++;

        }
    

    printf("Total Words: %d\n", count);
  
    fclose(fp);

    return 0;
}
