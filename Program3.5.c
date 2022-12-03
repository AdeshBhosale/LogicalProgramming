#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

int CheckVowel(char cValue2)
{
   if(cValue2 == 'a' || cValue2 == 'e' || cValue2 == 'o' || cValue2 == 'i' || cValue2 == 'u' ||
      cValue2 == 'A' || cValue2 == 'E' || cValue2 == 'O' || cValue2 == 'I' || cValue2 == 'U')
     {
        return TRUE;
     }
     else
     {
        return FALSE;
     }
}

int main()
{
    char cValue = '\0';
    int  bRet = 0;

    printf("Enter Value : \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    { 
       printf("It is not Vowel");
    }

    return 0;
}