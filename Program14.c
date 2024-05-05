//Problem Statment - Accept one character from user & convert case of that character.

/*
Input: a output:A
Input: D Output: d
*/
#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue + 32);
    }
    else if(CValue  >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character: \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
