#include <stdio.h>

int main()
{
    FILE *fp;

    // Single dimension array (one long string)
    char str[] ="Anu","Anni\n", "Kum\n", "Chinnu\n", "ROOPA\n", "Parsha\n", "Abhi\n", "Sidd\n", "Summi\n",  "SSB\n";

    // Write to file
    fp = fopen("file.txt", "w");

    if(fp == NULL)
    {
        printf("File not opened\n");
        return 1;
    }

    // Write character by character using fputc
    int i = 0;
    while(str[i] != '\0')
    {
        fputc(str[i], fp);
        i++;
    }

    fclose(fp);

    printf("Data written to file\n\n");

    // Reopen file to read using fgetc
    fp = fopen("file.txt", "r");

    if(fp == NULL)
    {
        printf("File not opened for reading\n");
        return 1;
    }

    printf("Reading using fgetc:\n");

    char ch;
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}