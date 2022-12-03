#include<stdio.h>

int DisplayConvert(char cValue)
{ 
    
    if(cValue <= 90)
    {
        printf("%c",cValue + 32);
        
    }
    else

    {
        printf("%c",cValue - 32);   
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter the Value : \n");
    scanf("%c",&cValue);
   
    DisplayConvert(cValue);



    return 0;
}