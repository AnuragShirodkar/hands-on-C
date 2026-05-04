#include<stdio.h>
enum months{Jan = 1, Feb , March, April, May, Jun , July, Aug ,Sep, Oct, Nov, Dec};
char *name = {"JAN", "FEB", "MARCH", "APRIL", "MAY", "JUN", "JULY", "AUG", "SEP", "OCT", "NOV", "DEC"};
int main(){
    enum months m1;
    for(int i= Jan; i<=Dec; i++)
    
    printf("%s > %d", name[i], i++);
}