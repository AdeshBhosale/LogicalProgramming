#include<stdio.h>
int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Range of digits in between Three and Seven : %d",iRet);

    return 0;
}