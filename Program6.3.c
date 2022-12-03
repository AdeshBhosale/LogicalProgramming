#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo1,int iNo2)
{
   if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue1);

     printf("Enter Number : \n");
    scanf("%d",&iValue2);

    bRet = CheckEven(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Number is Equal");
    }
    else
    {
       printf("Number is not Equal");
    }

    return 0;


}