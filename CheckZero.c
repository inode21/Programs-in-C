//WAP which accept number from user and check whether it contains 0.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
            break;
        }

        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = checkZero(iValue);

    if(bRet == TRUE)
    {
        printf("%d contains zero.\n",iValue);
    }
    else
    {
        printf("%d does not contain zero.\n",iValue);
    }
    return 0;
}