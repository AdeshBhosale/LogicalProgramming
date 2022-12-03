#include<stdio.h>
int CountOdd(int iNo)
{
    int iDigit = 0;
    int iOddDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iOddDigit++;
        }
        iNo = iNo /10;
    }
    return iOddDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Number of Odd digits are : %d",iRet);

    return 0;
}