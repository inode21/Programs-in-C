//Accept two numbers from user and display first number in second number of times

#include<stdio.h>

void DisplayNumber(int iNo, int Frequency)
{
    int i = 0;

    if(Frequency < 0)
    {
        Frequency = -Frequency;
    }
    
    for ( i = 1; i <= Frequency; i++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{   
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue1);

    printf("Enter Frequency :\n");
    scanf("%d",&iValue2);

    DisplayNumber(iValue1,iValue2);
    
    return 0;
}