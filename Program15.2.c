#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenFrequency = 0;
    int iOddFrequency = 0;
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
           iEvenFrequency++;
        }
        else
        {
            iOddFrequency++;
        }
    }
    return iEvenFrequency - iOddFrequency;
   
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;

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

   iRet = Frequency(ptr, iLength);

   printf("The Difference between Even and odd Frequency is : %d\n",iRet);

    free(ptr);

    return 0;
}