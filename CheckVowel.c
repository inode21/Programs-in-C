//Accept one character from user and check whether that character is vowel (a, e, i, o, u) or not.

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckVowel(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
    }
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
}

int main()
{
    char cData = '\0';
    BOOL bRet = FALSE;

    printf("Enter character :\n");
    scanf("%c",&cData);

    bRet = CheckVowel(cData);

    if(bRet == TRUE)
    {
        printf("%c is a vowel.\n",cData);
    }
    else
    {
        printf("%c is a not a vowel.\n",cData);
    }
    return 0;
}