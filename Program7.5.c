#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    
    printf("Table of %d is : \n",iNo);

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the numebr\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}