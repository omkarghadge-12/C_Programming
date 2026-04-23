#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
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
    bool bRet = false;
    int iValue = 0;

    printf("enter the no. :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    printf("result is :%d\n",bRet);
    return 0;
}