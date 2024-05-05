// Problem statment - write a program which accept one number from user & print that number of even numbers on screen.

/*
Input - 7
output - 2 4 6 8 10 12 14
*/

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int i = 2;
    int iCnt = 0;

    while(iCnt < iNo)
    {
        printf("%d",i);
        iCnt++;

        i = i + 2;
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    

    return 0;
}
