#include<stdio.h>

void Numbers(int iNo)
{ 
    if(iNo < 50)
    {
        printf("Number is small");
    }
    else if((iNo < 100)&&(iNo > 50))
    {
        printf("Number is medium");
    }
    else
    {
        printf("Number is large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the numebr\n");
    scanf("%d",&iValue);

    Numbers(iValue);

    return 0;
}