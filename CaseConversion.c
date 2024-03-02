//Accept one character from user and convert case of that character.

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n",cValue - 32);
    }

    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n",cValue + 32);
    }
}
int main()
{
    char cData = '\0';

    printf("Enter a character :\n");
    scanf("%c",&cData);

    DisplayConvert(cData);

    return 0;
}