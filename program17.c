#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    return ((iNo % 2) == 0);
}
int main()
{
    bool bRet = false;
    int iValue = 0;

    printf("enter the no. :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d i even no.",iValue);
    }
    else
    {
        printf("%d is odd no.",iValue);
    }

    return 0;
}