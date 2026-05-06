#include<stdio.h>
float area(float r);

int main(){
    float radious, Cir;
    printf("Ente the radious of Circle : ");
    scanf("%f", &radious);
    Cir = area(radious);
    printf("Cir of Circle is %f", Cir);
    return 0;
}
float area(float r)
{
    float Cir;
    Cir = 2*3.14*r;
    return Cir;
}