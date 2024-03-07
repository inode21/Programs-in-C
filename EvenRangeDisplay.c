//WAP which accept range from user and display all even numbers in between that range.

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Range.\n");
        return;
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting number :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending number :\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    
    return 0;
}