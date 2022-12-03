#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
 
    if(iStart < iEnd)
   {
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            printf("%d\t",iCnt);
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}