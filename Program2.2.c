#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0; 
     
    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    
    printf("enter number : \n");
    scanf("%d",&iValue);
    
    Accept(iValue);

    return 0;
}