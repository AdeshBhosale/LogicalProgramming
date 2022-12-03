#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
   int iCnt = 0;

   printf("Elements from that range\n");

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
     if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
     {
        printf("%d\t",Arr[iCnt]);
     }
   }
}

int main()
{
    int *ptr = NULL;
    int i = 0;
    int iLength = 0;
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of elements that you want \n");
    scanf("%d",&iLength);

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

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

     Range(ptr, iLength,iValue1, iValue2);

    free(ptr);

    return 0;
}