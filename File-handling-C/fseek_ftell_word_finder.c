#include <stdio.h>

int main() {

    FILE *fp = fopen("numbers.txt", "r");

    if(fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    char ch;
    int wordCount = 0;

    // Move to beginning
    fseek(fp, 0, SEEK_SET);

    while((ch = fgetc(fp)) != EOF) {

        // Detect start of word
        if(ch != ' ' && ch != '\n') {

            long pos = ftell(fp) - 1;   // get start position

            wordCount++;

            if(wordCount == 3) {

                // Move pointer back to start of this word
                fseek(fp, pos, SEEK_SET);

                printf("3rd word: ");

                // Print word until space
                while((ch = fgetc(fp)) != ' ' && ch != '\n' && ch != EOF) {
                    printf("%c", ch);
                }

                break;
            }

            // Skip remaining characters of current word
            while((ch = fgetc(fp)) != ' ' && ch != '\n' && ch != EOF);
        }
    }

    fclose(fp);

    return 0;
}
