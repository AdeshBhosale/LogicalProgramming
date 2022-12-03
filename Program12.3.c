#include<stdio.h>


int CountTwo(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iFrequency++;
        }
        
        iNo = iNo / 10;
    }
      return iFrequency;
}

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Frequency is : %d\n",iRet);


    return 0;
}