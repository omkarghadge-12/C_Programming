#include<stdio.h>
#include<stdbool.h>

bool Checkprime(int iNo)
{
    int iCnt =0 , iFrequency =0 ;
    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt =2; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }
    if(iFrequency == 0)     //no factors
    {
        return true;
    }
    else        //atleast 1 factor
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("enter the no, :");
    scanf("%d",&iValue);

    bRet = Checkprime(iValue);

    if(bRet == true)
    {
        printf("%d is prime no.",iValue);
    }
    else
    {
        printf("%d is not prime no.",iValue);

    }
    return 0;

}