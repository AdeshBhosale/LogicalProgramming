#include<stdio.h>
#include<stdlib.h>

void Digits(int *Arr, int iSize)
{
  int iCnt = 0, iDigit = 0;

  int Brr[iSize], iSum = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    Brr[iCnt] = Arr[iCnt];
  }
  
     while(Arr[iCnt] != 0)
    {
       iDigit = Arr[iCnt] % 10;
        iDigit = iSum + iDigit;

       Arr[iCnt] = Arr[iCnt] / 10;
    }
   printf("%d\t",iDigit);
   
}



int main()
{
    int *ptr = NULL;
    int i = 0;
    int iLength = 0;
   
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

     Digits(ptr, iLength);

    free(ptr);

    return 0;
}