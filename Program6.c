//Problem statement - Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)             //updator
    {
        iNo = -iNo;         
    }

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
