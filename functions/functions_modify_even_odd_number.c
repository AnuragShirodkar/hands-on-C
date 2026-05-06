#include <stdio.h>
int modifyNumber(int n) {
    if(n % 2 == 0)    
        return n - 1;
    else              
        return n + 1;
}
int main() {
    int i;
    printf("Modified numbers from 1 to 10:\n");

    for(i = 1; i <= 10; i++) {
        printf("%d ", modifyNumber(i));
    }
    return 0;
}
