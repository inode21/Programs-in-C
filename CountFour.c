//WAP which accept number from user and count frequency of 4 in it.

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }

        iNo = iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Frequency of four in %d is %d.\n",iValue,iRet);

    return 0;
}