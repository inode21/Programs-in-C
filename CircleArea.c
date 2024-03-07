//WAP which accepts radius from user and returns area.

#include<stdio.h>

double Circle_Area(float radius)
{
    double Area = radius * radius * 22/7;
    return Area;
}

int main()
{
    float fRadius = 0.0;
    double dRet = 0.0;

    printf("Enter radius:\n");
    scanf("%f",&fRadius);

    dRet = Circle_Area(fRadius);

    printf("Area of circle with radius %f is %f.",fRadius,dRet);

    return 0;
}