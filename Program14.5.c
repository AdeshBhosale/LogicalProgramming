#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

     printf("The Number Multiple By 11 is : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 11 ==0)
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

     printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength *sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter the elements : \n");

    for(i = 0; i< iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

     Display(ptr, iLength);


    free(ptr);
    return 0;
}