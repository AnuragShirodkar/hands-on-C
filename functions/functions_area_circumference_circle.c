#include<stdio.h>
float area(float r);
float cir(float r);

int main(){
    float radious, Area, Cir;
    printf("Ente the radious of Circle : ");
    scanf("%f", &radious);
    Area = area(radious);
    Cir = cir(radious);
    printf("Area of Circle is %f", Area);
    printf("\nCircumfarence of Circle is %f", Area);
    return 0;
}
float area(float r)
{
    float Area;
    Area = 3.14*(r*r);
    return Area;
}
float cir(float r){
    float Cir;
    Cir = 2*3.14*r;
    return Cir;
}