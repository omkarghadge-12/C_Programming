// iteration

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iNo= iNo /10;
        iCount++;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);

    printf("no.of digits :%d\n",iRet);
     return 0;

}