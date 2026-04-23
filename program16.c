////////////////////////////////////////////
//
//  Requried Header Files
//
////////////////////////////////////////////

#include<stdio.h>           //For Input Output
#include<stdbool.h>         //For bool datatype

////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Discription : It is used to check even odd
//  Input : Integer 
//  Output : Boolean
//  Author : Omkar Shankar Ghadge
//  Date : 10/10/2025
//
////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    { return true; }
    else
    { return false; }
}
////////////////////////////////////////////
//
//  Entry point function of application
//
////////////////////////////////////////////
int main()      
{
    bool bRet = false;
    int iValue = 0;

    printf("enter the no. :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {  printf("%d i even no.",iValue); }
    else
    { printf("%d is odd no.",iValue); }

    return 0;
}