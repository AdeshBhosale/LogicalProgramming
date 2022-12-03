#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
   int iCnt = 0;
   int iSum = 1;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
     if(Arr[iCnt] % 2 != 0)
     {
        iSum = iSum * Arr[iCnt];
     }
  
   }

   return iSum;
}

int main()
{
    int *ptr = NULL;
    int i = 0;
    int iLength = 0;
    int iRet = 0;
   
    printf("Enter the number of elements that you want \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to allocate the memory \n");
        return -1;
    }

    printf("Enter the elements \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Product(ptr, iLength);

    printf(" Product of all odd elements are : %d",iRet);

    free(ptr);

    return 0;
}