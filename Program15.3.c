#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
           break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    } 
    else
    {
        return iCnt;
    }  
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    bool bRet = 0;

    printf("Enter the number of elements that you want : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        ("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements :\n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

   bRet = Check(ptr, iLength);

   if(bRet == true)
   {
     printf("11 is Present\n");
   }
   else
   {
     printf("11 is not Present\n");
   }

    free(ptr);

    return 0;
}