#include<stdio.h>

int main(){

    FILE *fp;
    fp = fopen("Count_Char.txt", "r");

    if(fp == NULL){
        printf("File not exist\n");
        return 1;
    }

    int count = 0;
    int ch;
    int vowel = 0;
    int con = 0;

    while((ch = fgetc(fp)) != EOF){

        count++;

        // Convert uppercase to lowercase manually
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        // Check only alphabets
        if(ch >= 'a' && ch <= 'z'){

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u'){
                vowel++;
            }
            else{
                con++;
            }
        }
    }

    printf("Total characters: %d\n", count);
    printf("Total vowels: %d\n", vowel);
    printf("Total consonants: %d\n", con);

    fclose(fp);

    return 0;
}
