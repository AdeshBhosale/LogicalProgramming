#include<stdio.h>

void Reverse(int iNo)
{
    int iCnt = 0;


    for(iCnt = 10; iCnt > 0; iCnt--)
    {
       printf("%d\n",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Reverse(iValue);

    

    return 0;
}