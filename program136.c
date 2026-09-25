#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iLength = 0, iCnt = 0,  iRet = 0, iValue = 0;
    IPTR iptr = NULL;

    printf("enter the no of ele :");
    scanf("%d",&iLength);

    //step 1 : Allocate the memory
    iptr= (IPTR)malloc(iLength* sizeof(int));

    if(NULL  == iptr )
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter the value :\n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);

    }
    
    printf("enter the number to calculate frequency");
    scanf("%d\n",&iValue);

    //step 2:  use the memory 
   
    iRet= FrequencyCalculate(iptr, iLength,iValue);
    printf("frequency of the %d is : %d\n",iValue,iRet);

    //step 3: free the memory
    free(iptr);

    return 0;
}