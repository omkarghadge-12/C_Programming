#include<stdio.h>

void CountfactorsNonFactors(int iNo)
{
    int iCnt =0 , iFrequency1 =0 ,  iFrequency2 =0;
    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency1++;
        }
        else
        {
            iFrequency2++;
        }
    }
    printf("no. of Factors are :%d\n",iFrequency1);
    printf("no. of NonFactors are :%d\n",iFrequency2);

}
int main()
{
    int iValue = 0;
 
    printf("enter theb no, :");
    scanf("%d",&iValue);

    CountfactorsNonFactors(iValue);


    return 0;

}