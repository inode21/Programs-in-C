//WAPwhich accepts number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int i = 0, iSumFact = 0, iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iSumFact = iSumFact + i;
        }
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            iSumNonFact = iSumNonFact + i;
        }
    }

    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between sum of factors and sum of non factors of %d is %d.\n",iValue,iRet);

    return 0;
}