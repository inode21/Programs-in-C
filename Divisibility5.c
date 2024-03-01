//Accept one number and check whether it is divisible by 5 or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckDivisibility(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisibility(iValue);

    if(bRet == TRUE)
    {
        printf("%d is divisible by %d.",iValue,5);
    }
    else
    {
        printf("%d is not divisible by %d.",iValue,5);
    }
    return 0;
}