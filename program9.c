/*
    step1:understand the problem statement 
    step2:write the algorithm
    step3:decide the programming language
    step4:write the program
    step5:test the program
*/

/*Algorithm
START
    accept first no. as no1
    accept second no. as no2
    if the input is -ve then convert it into +ve
    perform addition of no1 and no2
    display the addition on screen
STOP
*/

#include<stdio.h>

float AdditionTwoNumber(float fNo1 , float fNo2)
{
    float fSum = 0;

    //updater
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2;    //business logic

    return fSum;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("enter first no.:\n");
    scanf("%f",&fValue1);

    printf("enter second no.:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumber(fValue1,fValue2);
    printf("addition is :%f\n",fRet);

    return 0;
}