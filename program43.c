// Input 12 2 output true
// Input 12 3 output true
// Input 12 5 output false

#include<stdio.h>

int main()
{
   int iValue1 = 0, iValue2 = 0;

   printf("enter first no. :");
   scanf("%d",&iValue1);

   printf("enter second no. :");
   scanf("%d",&iValue2);

   if((iValue1 %iValue2) == 0)
   {
        printf(" completly divisible \n");
   }
   else 
   {
                printf("not  divisible \n");

   }
    return 0;
}