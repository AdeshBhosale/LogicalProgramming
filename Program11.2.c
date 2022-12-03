#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
 
    if(iStart < iEnd)
   {
    for(iCnt = iStart; iCnt <= iEnd; iCnt = iCnt+2)
        {
           if(iCnt % 2 == 0)
           {
             printf("%d\t",iCnt);
           }
           else
           {
             printf("%d\t",iCnt+1);
           }
        }
   }  
        else if(iStart == iEnd)
        {
            printf("%d\t",iStart,iEnd);
        }
        else
        {
            printf("Invalid Statement");
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}