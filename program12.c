/*Algorithm
START
    Accept no. and store as no
    divide no by 2
    If the remainder is 0 
        then display as even 
    otherwise
         display as odd
STOP


*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("it is even no. ");
    }
    else
    {
        printf("it is odd no.");
    }
}
int main()
{
    int iValue = 0;

    printf("enter the no. :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);


    return 0;
}