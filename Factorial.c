//WAP to which accepts a number from user and returns its factorial.

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return 1;
    }
    else if(iNo > 1)
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is %d.\n",iValue,iRet);
    return 0;
}