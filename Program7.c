//Problem statement - Accept one number from user & print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)             // Condition to handle negative input
    {
        iNo = -iNo;         
    }

    while(iNo > iCnt)        
    {
        printf("*\n");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
