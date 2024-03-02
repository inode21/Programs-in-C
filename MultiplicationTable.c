//WAP which accepts one number from user and print that number of even numbers on screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        return;
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t",2*i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}