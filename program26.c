#include<stdio.h>

//dynamic function
void Display(int ifrequency)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= ifrequency; iCnt++)
    {
        printf("jay ganesh...\n");
    }
}


int  main()
{
    int iCount = 0;
    printf("enter the frequency");
    scanf("%d",&iCount);

    Display(iCount);
    return 0;
}
