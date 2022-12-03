#include<stdio.h>


int CountFour(int iNo1, int iNo2)
{
    int iDigit = 0;
    int iFrequency = 0;

    while(iNo1 != 0)
    {
        iDigit = iNo1 % 10;
        if(iDigit == iNo2)
        {
            iFrequency++;
        }
        
        iNo1 = iNo1 / 10;
    }
      return iFrequency;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    printf(" Check Frequency\n");
    scanf("%d",&iValue2);

    iRet = CountFour(iValue1, iValue2);

    printf("Frequency is : %d\n",iRet);


    return 0;
}