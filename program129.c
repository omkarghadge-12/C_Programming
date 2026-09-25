#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
    }
}

int main()
{
     int iLength = 0, iCnt = 0, iRet = 0;
   int *ptr = NULL;

   printf("enter number of elements :");
   scanf("%d",&iLength);

   ptr = (int *)malloc(iLength*sizeof(int));
     if(NULL == ptr) //industrial way of coding
    {
        printf("unable to allocate memory\n");
        return -1;
    }
   printf("enter the elements :\n");

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        scanf("%d",&ptr[iCnt]);
   }

   iRet = CountEven(ptr, iLength);

   printf("number of even elements are  :%d\n",iRet);

   free(ptr);

    return 0;

}