/*Algorithm
START
    accept first no. as no1
    accept second no. as no2
    if the input is -ve then convert it into +ve
    perform addition of no1 and no2
    display the addition on screen
STOP
*/

/////////////////////////////////////////////////////////////
//
//  requried Header file
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//  
//  Function name :  AdditionTwoNumber
//  Discription :    It is used to perform addition    
//  Input :          Float ,Float
//  Output :         Float
//  Author :         Omkar Shankar Ghadge
//  Date :           09/10/2025
//
/////////////////////////////////////////////////////////////
float AdditionTwoNumber(
                            float fNo1,                 //First input
                            float fNo2                  //second input
                        )
{
    float fSum = 0;                                    // To store the result

    
    if(fNo1 < 0.0f)                                    //Updater
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                    //Updater
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2;                                //business logic

    return fSum;
}   //End of AdditionTwoNumber

/////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;               //To accept user input
    float fRet = 0.0f;                                  //To store the result

    printf("enter first no.:\n");
    scanf("%f",&fValue1);

    printf("enter second no.:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumber(fValue1,fValue2);          //Method call
    printf("addition is :%f\n",fRet);

    return 0;
}   //End of main
/////////////////////////////////////////////////////////////
//
//  Input1:10.5    Input2 :3.2    Output : 13.7
//  Input1:-10.5   Input2 :3.2    Output : 13.7
//  Input1:10.5    Input2 :-3.2   Output : 13.7
//  Input1:-10.5   Input2 :-3.2   Output : 13.7
//  Input1:10.5    Input2 :0.0    Output : 13.7
//
/////////////////////////////////////////////////////////////