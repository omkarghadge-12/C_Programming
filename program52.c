#include<stdio.h>

int CountNonfactors(int iNo)
{
    int iCnt =0 , iFrequency =0 ;
    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter theb no, :");
    scanf("%d",&iValue);

    iRet = CountNonfactors(iValue);

    printf("No.of non factors are :%d",iRet);

    return 0;

}