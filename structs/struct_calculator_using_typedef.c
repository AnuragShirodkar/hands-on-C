//Simple Cal using structure
#include<stdio.h>

typedef struct{
    int a, b, c;
}cal;

int main(){
    cal C;
    int Choice;
    float Res;
    printf("Press \n 1. Add\n 2. Sub\n 3. Mul\n 4. Div\n  and 5. Exit\n");
    printf("Enter the Choice : \n");
    scanf("%d", &Choice);

    printf("Enter the 3 numbers: \n");
    scanf("%d %d %d", &C.a, &C.b, &C.c);

    switch(Choice){
        case 1: Res = C.a + C.b + C.c; 
        printf("The Final result is %0.2f", Res);
        break;
        case 2: Res = C.a - C.b - C.c;
        printf("The Final result is %0.2f", Res);
        break;
        case 3: Res = C.a * C.b * C.c;  
        printf("The Final result is %0.2f", Res);
        break;
        case 4: if(C.b ==0 || C.c == 0){
        printf("Zero Error");
        }
        else 
        Res = C.a / C.b / C.c; 
        printf("The Final result is %0.2f", Res);
        break;
        case 5: printf("Please Come again Thank you"); break;
        default: printf("Invalid Choice");
    }
   
   return 0;
}