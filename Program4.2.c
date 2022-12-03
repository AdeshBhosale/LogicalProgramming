#include<stdio.h>

 void DisplayReverse(int iNo)
{
    int iCnt = 0;
    printf("Factors are : \n");

    for(iCnt  = iNo; iCnt >= 1;iCnt--)
    {
       if(iNo % iCnt == 0)
       {
        printf("%d\n",iCnt);
       }
           
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

     DisplayReverse(iValue);

    return 0;
}
