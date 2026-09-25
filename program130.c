#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum / iSize);  //issue
}

int main()
{
     int iLength = 0, iCnt = 0;
     float fRet = 0;
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

   fRet = Average(ptr, iLength);

   printf("Average is :%f\n",fRet);

   free(ptr);

    return 0;

}