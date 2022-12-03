#include<stdio.h>

 void NonFact(int iNo)
{
    int iCnt = 0;
    printf(" Non Factors are : \n");

    for(iCnt  = 1; iCnt <= iNo;iCnt++)
    {
       if(iNo % iCnt != 0)
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

     NonFact(iValue);

    return 0;
}
