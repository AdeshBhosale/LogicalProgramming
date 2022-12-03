#include<stdio.h>

int DollarInINR(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       iSum = 70 * iCnt;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = DollarInINR(iValue);

    printf("Value of INR is : %d\n",iRet);

    return 0;
}