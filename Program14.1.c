#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(i = 0; i< iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[i];
        }
        else
        {
            iOddSum = iOddSum + Arr[i];
        }

    }
    return iEvenSum - iOddSum;

}

int main()
{
    int *p = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;

}