#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < iEnd)
    {
        if(iStart > 0)
        {
            for(iCnt = iStart; iCnt <= iEnd; iCnt++);
            {
                if(iCnt % 2 == 0)
                {
                  iSum = iSum + iCnt;
                }  
            }
        }
        else
        {
            printf("Invalid Range");
        }
    }
    else
    {
        printf("Invalide Range");
    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition of all Even number is : %d\n",iRet);

    return 0;
}