#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    char *srs = str;
    char *dst = str;
     
    while(*srs != '\n')
    {
        if(*srs != 'a'||*srs != 'e'||*srs != 'i'||*srs != 'o'||*srs!='u'||*srs !='A'||*srs != 'E'||*srs != 'I'||*srs != 'O'||*srs != 'U')
        {
            *dst = *srs;
            dst++;
        }
        srs++;
    }
    *dst = '\0';
    dst = str;
    printf("String without vowel is:%s\n", str);
    
    return 0;

}