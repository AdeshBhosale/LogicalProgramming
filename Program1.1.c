#include<stdio.h>

int DivideTwoNumber(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 / iNo2;

    if(iNo1 % iNo2)
    {
        return -1;
    }
   
    return iAns;
}
int main()
{
    int iValue1 = 15;
    int iValue2 = 5;
    int iRet = 0;

     iRet = DivideTwoNumber(iValue1 , iValue2);

     printf("Division is : %d\n",iRet);

    return 0;
}