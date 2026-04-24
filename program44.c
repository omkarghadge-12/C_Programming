#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
{
    if(iNo1 % iNo2 == 0)
    {
        return true;
   }
   else 
   {
        return false;
   }
}

int main()
{
   int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

   printf("enter first no. :");
   scanf("%d",&iValue1);

   printf("enter second no. :");
   scanf("%d",&iValue2);

   bRet=CheckDivisible(iValue1,iValue2);

   if((bRet == true))
   {
        printf(" completly divisible \n");
   }
   else 
   {
                printf("not  divisible \n");

   }

   
    return 0;
}