#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 2; iCnt <= iNo*2; iCnt = iCnt+2)
    {
        printf("Even Numbers are : %d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
