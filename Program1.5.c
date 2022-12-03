#include<stdio.h>

void Accept()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 5;
    
    Accept();

    return 0;
}