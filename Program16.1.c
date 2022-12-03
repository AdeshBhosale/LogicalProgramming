#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    int i = 0;
    int iLength = 0;
    int iValue = 0;
    bool bRet = false;

    printf("Enter number of element that you want \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to fatch the memory");
        return -1;
    }

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = Check(ptr, iLength, iValue);

      if(bRet == true)
        {
             printf("Number is present");
        }
        else
        {
            printf("Number is not present");
        }

    free(ptr);

    return 0;
}