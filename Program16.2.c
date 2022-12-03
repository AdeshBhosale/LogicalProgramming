#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
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
        return -1;
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
    int iNum = 0;

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

    printf("Enter the number\n");
    scanf("%d",&iNum);

    iRet = FirstOcc(ptr, iLength,iNum);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First Occerence of No is : %d",iRet);
    }

    free(ptr);

    return 0;
}