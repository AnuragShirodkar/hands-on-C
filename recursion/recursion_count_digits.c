#include <stdio.h>

int count(int n) {
    if (n == 0)
        return 0;
    else
        return 1 + count(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Number of digits = 1");
    else
        printf("Number of digits = %d", count(num));

    return 0;
}
