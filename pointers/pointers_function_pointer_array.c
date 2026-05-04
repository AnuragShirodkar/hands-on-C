#include <stdio.h>

/*int sum(int *x, int *y) {
    return (*x + *y);
}

int main() {
    int a, b, add;

    printf("Enter the 2 numbers: ");
    scanf("%d %d", &a, &b);

    add = sum(&a, &b);   // passibg a addresses

    printf("Sum = %d\n", add);

    return 0;
}*/
int sum(int x, int y) {
    return (x + y);
}
int sub(int x, int y){
    return ( x-y);
}

int main() {
    int a, b, add, Sub;

    printf("Enter the 2 numbers: ");
    scanf("%d %d", &a, &b);
    int (*ptr[2])(int , int) = {sum, sub};
    add = (*ptr[0])(a, b);  
    Sub = (*ptr[1])(a, b);
    printf("Sum = %d\n", add);
    printf("Sub = %d\n", Sub);
    return 0;
}

