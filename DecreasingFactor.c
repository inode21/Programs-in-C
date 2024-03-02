//WAP which accept number from user and display its factors in decreasing order.

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo/2; i > 0; i--)
    {
        if((iNo % i)== 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}