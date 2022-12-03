#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt  = iNo; iCnt <= 1; iCnt--)
    {
       if(iNo % iCnt == 0)
       {
        printf("%d\n",iCnt);
       }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    printf("Factors are : \n");

    return 0;
}
