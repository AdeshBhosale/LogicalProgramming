#include<stdio.h>

void RangeDisplayRev(int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
    {
        printf("%d\n",iCnt);
        
        if(iNo1 > iNo2)
        {
            printf("Invalid Statement");
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}