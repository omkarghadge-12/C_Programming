#include<stdio.h>

void display(int ino)
{
    int icnt = 0;
    for(icnt=2;icnt<= ino;icnt+=2)
    {
        printf("%d\t",icnt);
    }
    printf("\n");
}
// Time complexity : O(N/2)
int main()
{
    int ivalue = 0;
    printf("enter the frequency :");
    scanf("%d",&ivalue);

    display(ivalue);

    return 0;
}