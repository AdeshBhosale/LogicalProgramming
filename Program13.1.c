#include<stdio.h>
int CountEven(int iNo)
{
    int iDigit = 0;
    int iEvenDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenDigit++;
        }
        iNo = iNo /10;
    }
    return iEvenDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("NUmber of even digits are : %d",iRet);

    return 0;
}