#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// < O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
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
        return true;
    }
}
int main()
{
    int iLength = 0, iCnt = 0,   iValue = 0;
    IPTR iptr = NULL;
    bool bRet = false;

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
    
    printf("enter the number to Search");
    scanf("%d\n",&iValue);

    //step 2:  use the memory 
   
    bRet= LinearSearch(iptr, iLength,iValue);

    if(bRet == true)
    {
        printf("%d is present in the data \n",iValue);
    }
    else
    {
        printf("%d is not present in the data \n",iValue);

    }
    //step 3: free the memory
    free(iptr);

    return 0;
}