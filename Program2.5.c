#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    int iAns = 0;

    if(iNo % 2 == 0)
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

    printf("enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Number is Even\n",iValue);
    }
    else
    {
        printf("Number is Odd\n",iValue);
    }
    

    
    return 0;
}