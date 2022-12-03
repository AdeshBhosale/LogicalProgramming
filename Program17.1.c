#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
  int iCnt = 0;
  int iMax = Arr[0];

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if(Arr[iCnt] > iMax)
    {
       iMax = Arr[iCnt];
    }
  }
 
  return iMax;
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

    iRet = Maximum(ptr, iLength);

    printf(" Maximum Number is : %d",iRet);

    free(ptr);

    return 0;
}