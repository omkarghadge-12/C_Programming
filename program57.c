#include<stdio.h>
#include<stdbool.h>

bool Checkprime(int iNo)
{
    int iCnt =0;
    bool flag = false;
    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt =2; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            flag = false;
            break;      //optimization
        }
    }
    return flag;
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

/*
time complexity : for prime - N/2
time complexity : for non prime - either 1 or 2
*/