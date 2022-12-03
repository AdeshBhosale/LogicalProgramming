#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("12\n",iCnt);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue);

    printf("Enter second number : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}