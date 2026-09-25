#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0; 
    iMax = Arr[0];  //important

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >iMax)
        {
            iMax= Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
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
    
   
    //step 2:  use the memory 
   
    iRet=Maximum( iptr ,iLength);

    printf("MAx no is %d",iRet);
    //step 3: free the memory
    free(iptr);

    return 0;
}