//WAP which accept range from user and display all numbers in between that range in reverse order.

#include<stdio.h>

void DisplayRange(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Start :\n");
    scanf("%d",&iValue1);

    printf("Enter End :\n");
    scanf("%d",&iValue2);

    DisplayRange(iValue1,iValue2);

    return 0;
}