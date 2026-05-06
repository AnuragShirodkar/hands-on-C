#include<stdio.h>
float area(float r);

int main(){
    float radious, Area;
    printf("Ente the radious of Circle : ");
    scanf("%f", &radious);
    Area = area(radious);
    printf("Area of Circle is %f", Area);
    return 0;
}
float area(float r)
{
    float Area;
    Area = 3.14*(r*r);
    return Area;
}