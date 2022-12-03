#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if (iAns == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("enter the number : \n");
    scanf("%d",&iValue);

    bRet = DivisibleByFive(iValue);

    if(bRet == true)
    {
        printf("Number is  Divisible by Five : %d\n",iValue);
    }
    else
    {
        printf("Number is not Divisible by Five : %d\n",iValue);
    }
    return 0;
}