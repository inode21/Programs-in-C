//WAP which accepts radius from user and returns area.

#include<stdio.h>

double Circle_Area(float radius)
{
    double Area = radius * radius * 22/7;
    return Area;
}

int main()
{
    float fRadius = 0.0, fRet = 0.0;

    printf("Enter radius:\n");
    scanf("%f",&fRadius);

    fRet = Circle_Area(fRadius);

    printf("Area of circle with radius %f is %f.",fRadius,fRet);

    return 0;
}