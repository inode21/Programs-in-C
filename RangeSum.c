//WAP which accept range from user and return addition of all numbers in between that range.

#include<stdio.h>

int SumRange(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if((iEnd < iStart) || (iEnd < 0) || (iStart < 0))
    {
        printf("Invalid Range.\n");
        return -1;
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting number :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending number :\n");
    scanf("%d",&iValue2);

    iRet = SumRange(iValue1,iValue2);

    if(iRet == -1)
    {
        return 0;
    }

    printf("Sum of range is %d.\n",iRet);
    
    return 0;
}