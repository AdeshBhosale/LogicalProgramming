#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }

    if(iDigit == 0)
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

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It contain Zero");
    }
    else
    {
        printf("It not contain zero");
    }

    return 0;
}